class Solution {
public:
    int hammingDistance(int x, int y) {
        int count = 0;
        
        //If x == y then they are the same and no more diffrences.
        while(x != y) {
            //x bit and y bit are not the same.
            if((x & 1) != (y & 1)) {
                count++;
            }
            
            //Shift bits.
            y >>= 1;
            x >>= 1;
        }
        
        return count;
    }
};