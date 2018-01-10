class Solution {
public:
    void sortColors(vector<int>& nums) {
        map <int, int> map; //value key
        
        //Create hash map
        for (auto & element : nums) map[element]++;

        int pos = 0;
        int loc = 0;
        
        //Go through nums and replace each value with the occurences in the hash map.
        while(true) {
            if(loc > 2) break;
            if(map[loc] > 0) {
                nums[pos] = loc;
                map[loc]--;
                pos++;
            } else loc++;
        }
    }
};