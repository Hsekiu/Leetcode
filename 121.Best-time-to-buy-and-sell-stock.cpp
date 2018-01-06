//Slow O(n^2) solution
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        
        for(int i = prices.size() - 1; i > 0; i--) {
            int curr = prices.at(i);
            
            for(int j = i - 1; j >= 0; j--) {
                int diff = curr - prices.at(j);
                if(diff > max) {
                    max = diff;
                }
            }
        }
        
        return max;
    }
};