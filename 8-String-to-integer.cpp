class Solution {
public:
    int myAtoi(string str) {
        int result = 0;
        int resultsize = 0;
        int intsize = str.length() - 1;
        bool negflag = false;
        bool posflag = false;
        bool valset = false;
        
        for (int i = 0; i < str.length(); i++) {
            std::cout << str.at(i) << " : ";
            char a = str.at(i);
            int b = a - '0';
            
            if(result == 0 && (str.at(i) == '-' || str.at(i) == '+')) {
                std::cout << "sign" << std::endl;
                if((str.at(i) == '-' || str.at(i) == '+') && (posflag || negflag)) {
                    return result;
                }
                
                if(str.at(i) == '-') {
                    negflag = true;
                } else {
                    posflag = true;
                }
                
            } else if(str.at(i) == ' ' && (valset || negflag || posflag)) {
                std::cout << "space in the middle" << std::endl;
                return negflag ? -result : result;
            } else if(str.at(i) == ' ' || (str.at(i) == '+' && result == 0) || (negflag && posflag)) {
                std::cout << "space 2" << std::endl;
            } else if((b <= 9 && b >= 0) && (result >= 0)) {
                if(result*10 + b < 0) {
                    std::cout << "int limit" << std::endl;
                    if(negflag) {
                        return -2147483648;
                    } else {
                        return 2147483647;
                    }
                }
                result = result*10 + b;
                resultsize++;
                valset = true;
                std::cout << "result is: " << result << std::endl;
            } else {
                if(str.at(i) != '0') {
                    std::cout << "hit invalid string" << std::endl;
                    return negflag ? -result : result;
                }
            }
            
            intsize--;
        }
        
        return negflag ? -result : result;
    }
};