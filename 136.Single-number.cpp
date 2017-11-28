//Slow n(log(n)) solution, no extra space.

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //Sort list
        std::sort(nums.begin(), nums.end());
         
        //Iterate through sorted list and find element with neighbour that is not the same.
        int i = 0;
        while(i < nums.size() - 2) {
            if (nums[i] == nums[i+1]) {
                i += 2;
            } else {
                return nums[i];
            }
        }
        
        return nums[nums.size() -1];
    }
};