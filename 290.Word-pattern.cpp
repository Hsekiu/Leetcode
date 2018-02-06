class Solution {
public:
    bool wordPattern(string pattern, string str) {       
        vector<char> pat(pattern.begin(), pattern.end());
        std::vector<std::string> input = tokenize(str);
        unordered_map <char, int> patmap; //value key
        unordered_map <std::string, int> strmap;
        
        vector<char> keyp;
        vector<string> keys;
        for (auto & element : pat) {
            if(patmap[element] == 0) keyp.push_back(element);
            patmap[element]++;        
        }
        for (auto & element : input) {
            if(strmap[element] == 0) keys.push_back(element);
            strmap[element]++;        
        }
        
        if(patmap.size() != strmap.size()) return false;
        std::cout << patmap.size() << " : " << strmap.size() << std::endl;
        
        map <std::string, char> mymap;
        for(int i = 0; i < keys.size(); i++) {
            mymap.insert(std::pair<std::string, char>(keys[i], keyp[i]));
            std::cout << keys[i] << " : " << keyp[i] << std::endl;
        }
        
        std::map<std::string, char>::iterator it;
        for(int i = 0; i < input.size(); i++) {
            it = mymap.find(input[i]);
            if(it == mymap.end()) return false;
            if(it->second != pattern[i]) return false;
               
        }
        
        return true;
        
    }
    
    std::vector<std::string> tokenize(string str) {
        std::istringstream buf(str);
        std::istream_iterator<std::string> beg(buf), end;

        std::vector<std::string> tokens(beg, end);
        
        return tokens;
    }
};