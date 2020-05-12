//https://practice.geeksforgeeks.org/problems/minimum-sum-partition/0


// time : O(n^2)
//space : O(n*sum)

#include <bits/stdc++.h>
using namespace std;


vector <int> minSumPartition(vector<int> &arr ,int sum, int n )
{
    bool dp[n+1][sum+1];
    for(int i = 0 ; i < n+1 ; i++)
    {
        for(int j = 0 ; j < sum+1 ; j++)
        {
            if(i == 0)
                dp[i][j] = false;
            if(j == 0)
                dp[i][j] = true ;
        }
        
    }
    for(int i = 1 ; i < n+1 ; i++)
    {
        for(int j = 1 ; j < sum+1 ; j++)
        {
            if(arr[i - 1] <= j)
            {
                dp[i][j] = dp[i - 1][j - arr[i - 1]] || dp[i - 1][j];
                
            }
            else 
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
        
    }
    vector < int > v;
    for(int j = 0 ; j <= (sum+1)/2 ; j++)
    {
        if(dp[n][j] == true)
            v.push_back(j);
    }
    
    return v;        
    
}
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int range = 0;
        vector <int> arr(n);
        for(int i = 0 ;i< n;cin>>arr[i++]);
        for(int i = 0 ; i < n; i++)
            range+=arr[i];
        vector <int> v = minSumPartition(arr, range , n);
        int mn = INT_MAX;
        for(int i = 0 ;i <v.size();i++)
        {
            mn = min(mn,abs(range - (2*v[i])));
        }
        cout<<mn<<endl;
    }
    return 0;
}