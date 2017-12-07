class Solution {
public:
    int addDigits(int num) {
        
        int answer = digitsInt(num);
        
        //Loop till answer has only one digit.
        while(answer > 9) {
           answer = digitsInt(answer); 
        }
        
        return answer;
    }
    
    //Add digits together.
    int digitsInt(int num) {
        int result = 0;
        while(num != 0) {
            result += num%10;
            num /= 10;
        }
        return result;
    }
};