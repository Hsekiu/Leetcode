class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            
            //Delete 0 at position i and push to back, since deletion the index does not increase.
            if(nums.at(i) == 0) {
                nums.erase(nums.begin() + i);
                nums.push_back(0);
                i--;
            }
            count++;
            
            //If at end of input and hitting zero's we are done.
            if(count > nums.size()) break;
        }
    }
};