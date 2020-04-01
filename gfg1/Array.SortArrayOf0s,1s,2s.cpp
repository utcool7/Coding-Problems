
//time : O(nlogn)
//space: O(1)


#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n)
{
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
          cin>>arr[i];
        solve(arr, n);
    }
    return 0;
}


// optimized approach 
//time : O(n)
//space: O(1)


#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n)
{
    int low = 0 , mid = 0 , high = n-1 ;
    while(mid <= high)
    {
        if(arr[mid] == 0)
        {
            swap(arr[low],arr[mid]);
            mid++;
            low++;
        }
        else if(arr[mid] == 1)
        
           mid++;
        else if(arr[mid] == 2)
        {
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
          cin>>arr[i];
        solve(arr, n);
    }
    return 0;
}

