class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index = 0;
        
        for (auto & element : nums) {
            //std::cout << "element is: " << element << std::endl;
            
            if (element == target) {
                return index;
            }
            if (element > target) {
                return index;
            }
            index++;
        }
        return index;
    }
};