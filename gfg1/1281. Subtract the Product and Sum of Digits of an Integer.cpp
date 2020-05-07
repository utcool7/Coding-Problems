//time : O(log n)
//space :O(1)
class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int sum  = 0 , prod = 1 ;
        int rem ;
        while(n)
        {
            rem = n%10; 
            sum+=rem;
            prod*=rem;
            n/=10;
        }
        return prod - sum ;
    }
};
