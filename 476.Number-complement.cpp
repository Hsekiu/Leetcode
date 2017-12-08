class Solution {
public:
    int findComplement(int num) {
        vector<int> bin;
        
        //Convert int into 2's complement binary.
        while(num > 0) {
            int temp = num % 2;
            if(temp == 1) {
                bin.insert(bin.begin(), 0);
            } else {
                bin.insert(bin.begin(), 1);
            }
            num /= 2;
        }
        
        int size = bin.size() - 1;
        int result = 0;
        
        //Binary to int
        for(auto element : bin) {
            std::cout << element;
            if(element == 1) {
                result += pow(2, size);
            }
            size--;
        }
        std::cout << std::endl;
        
        return result;
    }
};