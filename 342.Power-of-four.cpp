class Solution {
public:
    bool isPowerOfFour(int num) {
        int result = log(num) / log(4);
        
        if((pow(4, result) == num) && num != 0) {
            return true;
        }
        
        return false;
    }
};