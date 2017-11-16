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
        
        if(x < 0) {
            return false;
        }
        
        int size = getSize(x);

        int a = x / (pow(10, size-1));
        int b = x % 10;
        bool flag = false;
        
        for(int i = 0; i < size; i++) {
            if(size < 2) {
                return true;
            }
            
            if(size != getSize(x)) {
                if(getSize(x) == 1) {
                    return false;
                }
                std::cout << "bad size" << std::endl;
                b = 0;
                flag = true;
            } else {
                b = x % (int)(pow(10, i + 1));
            }
            a = x / (pow(10, ((getSize(x) - 1) - i)));
            
            x -= b * pow(10, getSize(x) - 1 - i);
            x /= 10;
            
            if(!flag) {
                size -= 2;
                flag = false;
            }
            std::cout << "a is: " << a << " b is : " << b << " and x is: " << x << std::endl;
            if (a != b) {
                return false;
            }
        }
        
        return true;
        
    }
};