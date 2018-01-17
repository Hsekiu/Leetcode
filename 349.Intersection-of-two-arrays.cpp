class Solution {

public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map <int, int> map1, map2; //value key
        vector<int> res;
        
        for (auto & element : nums1) map1[element]++;
        for (auto & element : nums2) map2[element]++;
    
        //If element is non zero in both map's then it is a intersection element.
        for (auto element : map1) {
            if(element.second != 0 && map2[element.first] != 0) {
                res.push_back(element.first);
            } 
        }
        
        return res;
    }
};