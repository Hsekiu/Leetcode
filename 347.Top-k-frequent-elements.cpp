class Solution {
public:
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map <int, int> map; //value key
        vector<pair<int, int>> temp;
        
        //Build hash map for each element and number of occurences.
        for (auto & element : nums) {
            map[element]++;
        }
        
        //Copy map to vector and sort vector.
        copy(map.begin(), map.end(), back_inserter(temp));
        sort(temp.begin(), temp.end(), [](auto &left, auto &right) {
            return left.second > right.second;
        });

        //Take the first K elements of vector.
        vector<int> result;
        int i = 0;
        for (auto element : temp) {
            if(i < k) {
                result.push_back(element.first);
                i++;
            } else {
                break;
            }
        }
        
        return result;
    }
};