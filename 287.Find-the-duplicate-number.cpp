class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //Fails read only condition, if copied it would fail constant space.
        //Thus sorting is not a solution that fulfills all conditions.
        std::sort (myvector.begin(), myvector.end());
        
        for(int i = 1; i < nums.size(); i++) {
            if(nums.at(i - 1) == nums.at(i)) return nums.at(i);
        }
        
        //Case where no duplicate exists.
        return 0;
    }
};