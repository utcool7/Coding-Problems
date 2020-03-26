// time: O(n)
//space : O(1)
#include <bits/stdc++.h>
using namespace std;
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
        for(int i =0 ;i<n-1;i++)
        {
            if(arr[i]>=arr[i+1]) cout<<arr[i+1]<<" ";
            else cout<<-1<<" ";
        }
        cout<<-1<<endl ;
    }
    return 0;
}