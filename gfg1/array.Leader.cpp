//naive approach 
// time : O(n^2)
// space : O(1)

int leader(int arr[], int n)
{
    int i,j;
    for(i =0;i<n;i++)
    {
        for( j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
               break;
        }
        if(j==n)
           cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//optimized approach 
// time: O(n)
//space: O(n)
#include <bits/stdc++.h>
using namespace std;

int leader(int arr[], int n)
{
    list <int> v;
    int max  = -1;
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]>=max )
        {
            v.push_front(arr[i]);
            max= arr[i];
            
        }
        
    }
    for(auto x :v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i =0;i<n;i++)
           cin>>arr[i];
        leader(arr, n);
        
    }
    return 0;
}