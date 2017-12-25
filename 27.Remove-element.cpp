class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        int currsize = nums.size() - 1;
        
        for(int i = 0; i <= currsize; i++) {
            if(nums.at(i) == val) {
                // Remove element from list with one element.
                if(nums.size() == 1) {
                    nums.erase(nums.begin());
                    return nums.size();
                // Remove element from list with >1 elements.
                } else {
                    nums.erase(nums.begin() + i);
                    currsize--;
                    i--;
                }
            }
        }
        
        return nums.size();
    }
};