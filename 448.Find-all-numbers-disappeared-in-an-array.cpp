//Slow solution mostly due to sorting O(nlog(n))

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        int size = nums.size();
        
        //Edge case empty vector.
        if(nums.size() == 0) {
            return result;
        }
        
        int max = nums.size();
        std::sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        
        //Find all missing number in the range of the max of the vector.
        for(int i = 0; i <= nums.size() - 1; i++) {
            if(i + 1 != nums.at(i)) {
                //std::cout << "i is: " << i << "nums.at(i) is " << nums.at(i) << std::endl;
                nums.insert(nums.begin() + i, i + 1);
                result.push_back(i + 1);
            }
        }
        
        //Fill all missing number that were beyond max of vector.
        //std::cout << "Max is:" << max << "numsize is" << nums.size() << std::endl;
        if(max != nums.size()) {
            for(int i = max - (max - nums.size()); i <= max - 1; i++)
                result.push_back(i + 1);
        }
        
        return result;
    }
};