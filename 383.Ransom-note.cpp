class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map <char, int> ranmap; //value key
        map <char, int> magmap; //value key
        
        //Build ransomNote letter hashmap
        for(int i = 0; i < ransomNote.length(); i++) {
            ranmap[ransomNote.at(i)]++;
        }
        //Build ransomNote letter hashmap
        for(int i = 0; i < magazine.length(); i++) {
            magmap[magazine.at(i)]++;
        }
        
        //Check if each occurence in ransomNote hashmap occurs at least that many times in magazine hashmap.
        for (auto & element : ranmap) {
            if(!(element.second <= magmap.find(element.first)->second)) {
                return false;
            }
        }
    
        return true;
    }
    
};