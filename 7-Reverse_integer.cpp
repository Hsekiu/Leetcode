class Solution {
public:
    int reverse(int x) {
        int result = 0;
        bool neg = false;
        int prev = 0;
        
        //Set negative number flag.
        if(x < 0) {
            neg = true;
            x *= -1;
        }
        while(x > 0) {
            result *= 10;
            result += x % 10;
            
            //Check if overflow has occured.
            if((result - x %10)/10 != prev) {
               return 0; 
            }
                
            x /= 10;
            
            prev = result;
        }
        return (neg) ? -1*result: result;
    }
};