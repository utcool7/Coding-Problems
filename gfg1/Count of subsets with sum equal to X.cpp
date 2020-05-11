//https://www.geeksforgeeks.org/count-of-subsets-with-sum-equal-to-x/

// time : O(n^2)
//space : O(n*w)

#include <bits/stdc++.h>
using namespace std;

int subsetSum(vector<int> &arr ,int sum, int n )
{
    int dp[n+1][sum+1];
    for(int i = 0 ; i < n+1 ; i++)
    {
        for(int j = 0 ; j < sum+1 ; j++)
        {
            if(i == 0)
                dp[i][j] = 0;
            if(j == 0)
                dp[i][j] = 1 ;
        }
        
    }
    for(int i = 1 ; i < n+1 ; i++)
    {
        for(int j = 1 ; j < sum+1 ; j++)
        {
            if(arr[i - 1] <= j)
            {
                dp[i][j] = dp[i - 1][j - arr[i - 1]] + dp[i - 1][j];
                
            }
            else 
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
        
    }
    return dp[n][sum];
    
}
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sum;
        cin>>sum;
        vector <int> arr(n);
        for(int i = 0 ;i< n;cin>>arr[i++]);
        
        
        
    }
    return 0;
}