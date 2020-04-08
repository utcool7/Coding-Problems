//time :O(n)
//space : O(1)
#include <bits/stdc++.h>
using namespace std;


int kadane(int arr[], int n)
{
    int max_so_far = INT_MIN ;
    int max_end_here = 0;
    for(int i = 0 ;i < n; i++)
    {
        max_end_here+=arr[i];
        
        if(max_end_here < arr[i])
        {
            max_end_here = arr[i];
            
        }
        if(max_so_far < max_end_here)
        {
            max_so_far = max_end_here ;
        }
        
    }
    
    return max_so_far;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n ;
        cin>>n;
        int arr[n];
        int count = 0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<kadane(arr,n)<<endl;
        
    }
    return 0;
}