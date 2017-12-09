class Solution {
public:
    bool isPowerOfTwo(int n) {
        int result = log(n) / log(2);
        
        if((pow(2, result) == n) && n != 0) {
            return true;
        }
        
        return false;
    }
};