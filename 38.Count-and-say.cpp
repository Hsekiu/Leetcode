class Solution {
public:
    string countAndSay(int n) {
        string start = "1";
        //Create new sequences using old ones till get the one needed
        for(int i = 1; i < n; i++) start = builder(start);
        
        return start;
    }
    
    string builder(string str) {
        string res = "";
        int count = 0;
        char first = str.at(0);

        for(int i = 0; i < str.length(); i++) {
            if(first == str.at(i)) count++;
            else {
                res += to_string(count) + first;
                count = 1;
                first = str.at(i);
            }
            //Add the sequence end if not accounted for due to string termination
            if(i + 1 == str.length()) res += std::to_string(count) + first;
        }
        
        return res;
    }
};