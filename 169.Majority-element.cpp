class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int, int> map; //value key
        int majority = nums.size() / 2;
        
        //Build hash map for each element and number of occurences.
        for (auto & element : nums) {
            map[element]++;
        }
        
        //Find majority.
        for (auto element : map) {
            if(element.second > majority) {
                return element.first;
            }
        }
        
        return 0;
    }
};