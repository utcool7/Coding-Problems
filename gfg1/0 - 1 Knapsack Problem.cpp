//https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem/0

// time : O(n^2)
//space : O(n*w)


#include <bits/stdc++.h>
using namespace std;

int knapsack(vector<int> wt, vector<int> val , int w , int n )
{
    int dp[n+1][w+1];
    for(int i = 0 ; i < n+1 ; i++)
    {
        for(int j = 0 ; j < w+1 ; j++)
        {
            if(i == 0 || j == 0)
                dp[i][j] = 0;
        }
        
    }
    for(int i = 1 ; i < n+1 ; i++)
    {
        for(int j = 1 ; j < w+1 ; j++)
        {
            if(wt[i - 1] <= j)
            {
                dp[i][j] = max(val[i - 1] + dp[i - 1][j - wt[i - 1]], dp[i - 1][j]);
                
            }
            else if(wt[i - 1] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
        
    }
    return dp[n][w];
    
}
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int w;
        cin>>w;
        vector <int> wt(n),val(n);
        for(int i = 0 ;i< n;cin>>val[i++]);
        for(int i = 0 ;i< n;cin>>wt[i++]);
        cout << knapsack(wt,val,w,n) << endl ;
    }
    return 0;
}