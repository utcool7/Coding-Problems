//time: O(n)
//space : O(1)
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int act = n*(n+1)/2;
        int sum = 0 ;
        for(int i= 0; i<n;i++)
            sum+=nums[i];
        return act-sum;
        
    }
};