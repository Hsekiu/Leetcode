class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        if(nums.size() == 1) return 0;
        
        vector<int> sortednums = nums;
        std::sort(sortednums.begin(), sortednums.end());
        
        int largest = sortednums.at(sortednums.size() - 1);
        int sndlargest = sortednums.at(sortednums.size() - 2);
        
        vector<int>::iterator it;
        it = find(nums.begin(), nums.end(), largest);
        int pos =  std::distance(nums.begin(), it);
        
        std::cout << largest << " : " << sndlargest << std::endl;
        if(sndlargest * 2 <= largest) return pos;
        else return -1;
    }
};