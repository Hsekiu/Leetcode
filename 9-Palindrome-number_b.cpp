class Solution {
public:
    
    int getSize(int x) {
        int size = 0;
        
        while(x != 0) {
            x /= 10;
            size++;
        }
        
        return size;
    }
    
    bool isPalindrome(int x) {
        
        //If negative number then it's not a palindrome
        if(x < 0) {
            return false;
        }
        
        int size = getSize(x);

        //A is left number b is right number.
        int a, b;
        
        for(int i = 0; i < size; i++) {
            
            //If size is 1 or value is zero at this point in algorithm then must be palindrome.
            if(size < 2 || x == 0) {
                return true;
            }
            
            //Occurs when zero's in front get cancelled out. 
            if(size != getSize(x)) {
                if(getSize(x) == 1) {
                    return false;
                }
                //std::cout << "bad size of: " << size - getSize(x) << std::endl;
                a = 0;
            } else {
                a = x / (pow(10, ((getSize(x) - 1) - i)));
            }
            
            b = x % (int)(pow(10, i + 1));
            
            //Set X to value without head or tail numbers.
            x -= b * pow(10, getSize(x) - 1 - i);
            x /= 10;
            
            i--;

            size -= 2;
            
            //std::cout << "a is: " << a << " b is : " << b << " and x is: " << x << std::endl;
            if (a != b) {
                return false;
            }
        }
        
        return true;
        
    }
};