class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        vector<int> sortednums = nums;
        std::sort(sortednums.begin(), sortednums.end());
        std::reverse(sortednums.begin(), sortednums.end());
        vector<string> result;

        for(int i = 0; i < nums.size(); i++) {
            vector<int>::iterator it;
            
            it = find(sortednums.begin(), sortednums.end(), nums.at(i));
            int pos =  std::distance(sortednums.begin(), it);
            if(pos == 0) {
                result.push_back("Gold Medal");
            } else if(pos == 1) {
                result.push_back("Silver Medal");
            } else if(pos == 2) {
                result.push_back("Bronze Medal");
            } else {
                result.push_back(std::to_string(pos + 1));
            }
        }
        
        return result;
    }
};