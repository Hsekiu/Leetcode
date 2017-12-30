class Solution {
public:
    int checkMax(int result, int b, bool negflag) {
        if(result > INT_MAX / 10 ) {
            if(!negflag) return INT_MAX;
            if(result > INT_MIN / 10) {
                if(negflag) return INT_MIN;
            }
        }
        if(!negflag && result*10+b < 0) return INT_MAX;
        if(negflag && result*10+b < 0) return INT_MIN;
        return result;
    }
    
    int myAtoi(string str) {
        int result = 0, resultsize = 0;
        int intsize = str.length() - 1;
        bool negflag = false, posflag = false, valset = false;
        
        for (int i = 0; i < str.length(); i++) {
            std::cout << str.at(i) << " : ";
            char a = str.at(i);
            int b = a - '0';
            
            if(result == 0 && (str.at(i) == '-' || str.at(i) == '+')) {
                std::cout << "sign" << std::endl;
                if((str.at(i) == '-' || str.at(i) == '+') && (posflag || negflag)) {
                    return result;
                }
                
                if(str.at(i) == '-') negflag = true;
                else posflag = true;

            //Space in middle of input.
            } else if(str.at(i) == ' ' && (valset || negflag || posflag)) {
                return negflag ? -result : result;
            //Space at end of input.
            } else if(str.at(i) == ' ' || (str.at(i) == '+' && result == 0) || (negflag && posflag)) {
            } else if((b <= 9 && b >= 0) && (result >= 0)) {
                if(checkMax(result, b, negflag) != result) {
                    return checkMax(result, b, negflag);
                }
                result = result*10 + b;
                resultsize++;
                valset = true;
            } else {
                if(str.at(i) != '0') return negflag ? -result : result;
            }
            
            intsize--;
        }
        
        return negflag ? -result : result;
    }
};