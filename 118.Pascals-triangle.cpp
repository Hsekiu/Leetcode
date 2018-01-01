class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        
        if(numRows == 0) {
            return result;
        }
        
        vector<int> line;
        line.push_back(1);
        result.push_back(line);
        line.clear();
        
        for(int i = 0; i < numRows - 1; i++){ 
            line.push_back(1);
            if(result.back().size() != 1) {
                for(int i = 0; i < result.back().size() - 1; i++){
                    line.push_back(result.back().at(i) + result.back().at(i + 1));
                }
            }
            
            line.push_back(1);
            result.push_back(line);
            line.clear();
        }
        return result;
    }
};