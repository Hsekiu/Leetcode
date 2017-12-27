class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map <int, int> map; //hash map value, key
            
        //Add value to hasmap if not in hashmap otherwise duplicate.
        for (auto & element : nums) {
            if(map[element] >= 1) return true;
            else map[element]++;
        }
        
        return false;
    }
};