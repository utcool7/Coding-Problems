//time : O(log n)
//space : O(1)
class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long int i = 1;
        while(i<=n)
        {
            if(i==n)
                return true;
            i=i*2;
        }
        return false;
    }
};

//time : O(1)
//space : O(1)

// n&(n-1) sets the msb of the 
//number to 0 
// if the number is 0 then n&(n-1) makes 
// the number 0 .
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && !(n&(n-1));
    }
};