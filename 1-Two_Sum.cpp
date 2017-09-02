#include <iostream>
#include <vector>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> map; //value key
        vector<int> solution;
        
        //Create a hash table with value and index.
        for(int i = 0; i < nums.size(); i++) {
            map[nums[i]] = i;
        }
        
        //Look for value that is equal to target - current loop val of vector.
        for(int i = 0; i < nums.size(); i++) {
            if (map.find(target - nums[i]) != map.end()) {
                //Numbers must be distinct.
                if ((map[target - nums[i]]) != i) {
                    solution.push_back(i);
                    solution.push_back(map[target - nums[i]]);
                    return solution;   
                }
            }
        }
    }
};