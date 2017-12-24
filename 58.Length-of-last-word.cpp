class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        bool startflag = false;
        
        for(int pos = s.length() - 1; pos >= 0; pos--) {
            // End of word reached.
            if (s.at(pos) == ' ' && startflag) break;
            else {
                // Start of word when string has space padding at the end.
                if (!startflag && s.at(pos) != ' ') startflag = true;
                // Start counting word when no more spaces.
                if (startflag) count++;
            }
        }
        
        return count;
    }
};