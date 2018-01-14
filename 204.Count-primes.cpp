//Simple prime solution that exceeds time limit even with odd
//number only restriction.
class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
        if(n >= 3) count++;
        
        //There is no even prime thus check only odds.
        for(int i = 3; i < n; i += 2) {
            if(isPrime(i)) count++;
        }

        return count;
    }
    
    bool isPrime(int n) {
        //Only need to check up to square root of n.
        for (int i = 2; i <= sqrt(n); i++) {
            if(n != i && n % i == 0) return false;
        }
        return true;
    }
};