class Solution {
public:
    int climbStairs(int n) {
        std::vector<int> memo(n + 1, -1);

        return dp(n, memo);
    }
    
    int dp(int n, std::vector<int>& memo) {
        //Base case
        if(n <= 1) return 1;
        
        //Memoization to speed up calculation
        if (memo[n] != -1) return memo[n];
        
        memo[n] = dp(n - 1, memo) + dp(n - 2, memo);
        
        return memo[n];
    }
};