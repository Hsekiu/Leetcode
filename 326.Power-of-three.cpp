class Solution {
public:
    bool isPowerOfThree(int n) {
    	//Accuracy issue with natural log and rounding.
        int result = log10(n) / log10(3);
        
        if((pow(3, result) == n) && n != 0) {
            return true;
        }
        
        return false;
    }
};