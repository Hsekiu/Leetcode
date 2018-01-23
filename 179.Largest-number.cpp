class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string result;
        std::sort(nums.begin(), nums.end(), cusComp);
        
        for(int i = 0; i < nums.size(); i++) {
            result += to_string(nums[i]);
        } 

        //If the first number is 0 then the number must be 0 and not 00..
        if((result[0]) == '0') result = "0";

        return result;
    }
    
    //Custom comperator if ab > ba then a > b
    //but only for each digit in a and b.
    static bool cusComp(int a, int b) {
        string as = to_string(a);
        string bs = to_string(b);
        
        return as + bs > bs + as;
    }
};