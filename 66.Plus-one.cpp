class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool notadd = true;
        bool over = false;
        
        for(int i = digits.size() - 1; i >= 0; i--) {
            std::cout << "at : " << digits[i] << std::endl;
            if(digits[i] >= 9 && notadd) {
                digits[i] = 0;
                over = true;
            }
            else if (notadd) {
                digits[i]++;
                notadd = false;
                over = false;
            }
        }
        
        if(over) digits.insert(digits.begin(), 1);
        return digits;
    }
};