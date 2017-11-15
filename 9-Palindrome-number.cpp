class Solution {
public:
    
    int reverseInt(int x) {
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
    
    int getSize(int x) {
        int size = 0;
        
        while(x != 0) {
            x /= 10;
            size++;
        }
        
        return size;
    }
    
    bool isPalindrome(int x) {
        int num = x;
        
        //Negative numbers and 0 can't be palindromes.
        if(x < 0 || x % 10 == 0 && x != 0) {
            return false;
        }

        //Edge case single digit number are palindromes.
        if(x <= 9) {
            return true;
        }
        
        int size = getSize(x);
        
        int padding = 0;
        
        //Edge case for odd numbers, divide and ignore middle.
        if(size % 2 != 0) {
            size--;
            padding++;
        }

        //Left half of number
        int a = (num / (pow(10,(size / 2) + padding)));
        //Right half of number.
        int b = (num % (int)(pow(10,(size / 2))));
        
        b = -reverseInt(b);
        
        //Edge case reverse numbers with 0 in front.
        while (getSize(b) != getSize(a)) {
            b *= 10;
        }
        
        if(a + b == 0) {
            return true;
        } else {
            return false;
        }
    }
};