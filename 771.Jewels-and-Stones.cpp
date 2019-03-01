class Solution {
public:
    
    //Faster O(n + m)
    int numJewelsInStones(string J, string S) {
        unordered_set<char> set;
        int count = 0;
        
        //Fill the hash table with elements
        for(int i = 0; i < J.length(); i++) {
            set.insert(J.at(i));
        }
        
        for(int i = 0; i < S.length(); i++) {
            if(set.find(S.at(i)) != set.end()) count++;
        }
        
        return count;
    }
    
    //Slow O(n^2)
    int numJSSlow(string J, string S) {
        int count = 0;
        for(int i = 0; i < S.length(); i++) {
            char test = S.at(i);
            for(int j = 0; j < J.length(); j++) {
                char let = J.at(j);
                if(test == let) count++;
            }
        }
        
        return count;
    }
};