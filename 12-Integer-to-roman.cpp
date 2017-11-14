class Solution {
public:
       
    int help(int &num, int rome, int (&alphabet)[13], int i) {
        int res = 0;
        while(num >= rome) {
            num -= rome;
            res++;
        }
    
        return res;
    }

    string intToRoman(int num) {
        std::cout << num << std::endl;
        int alphabet[13] = {0};
        
        //Include edge cases that include substraction in dictionary.
        int romans[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
        std::string letters[13] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    
        std::string result = "";
        
        //Get number of occurences for each dictionary element.
        for(int i = 12; i >= 0; i--) {
            alphabet[i] = help(num, romans[i], alphabet, i);
        }

        //Build the resulting string.
        for(int i = 12; i >= 0; i--) {
            for(int j = 0; j < alphabet[i]; j++) {
                result += letters[i];
            }
        }  
        
        return result;
    }
};