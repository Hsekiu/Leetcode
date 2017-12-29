class Solution {
public:
    bool isHappy(int n) {
        unordered_map <int, int> map; //hash map value, key
        
        while(n != 1) {
            int temp = n;
            n = 0;
            while(temp != 0) {
                std::cout << temp % 10 << "^2 + " << std::endl;
                n += pow ((temp % 10), 2);
                temp /= 10;
            }
            
            //If alogorithm hits a number it have seen before then must be looping.
            if(map[n] >= 1) return false;
            else map[n]++;
            
            std::cout << "= " << n << std::endl; 
                 
        }
        return true;
    }
};