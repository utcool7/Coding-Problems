// naive solution or brute force solution 
// time : O(n^2)
// space : O(1)

#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int n , int k)
{
    int start = -1;
    int end = -1;
    
    for(int i=0 ;i<n;i++)
    {
        int sum = 0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            
            if(sum == k)
            {
              start = i+1,end = j+1;
              cout<<start<<" "<<end<<endl;
              return 1;
            }
              
        }
    }
    return -1;
    
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i =0 ;i<n;i++)
        {
            cin>>arr[i];
        }
        if(solve(arr,n,k)==-1)
          cout<<-1<<endl;
        
    }
    return 0;
}



// optimized solution 
//time : O(n)
//space : O(1)

#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int n , int k)
{
    int left=0, right=0;
    int curr_sum = 0;
    while(left<=right && right<=n)
    {
        
        
        if(curr_sum == k)
        {
            cout<<left+1 <<" "<<right<<endl;
            return 1;
        }
        else if(curr_sum<k)
        {
            curr_sum+=arr[right];
            right++;
        }
        else
        {
            curr_sum-=arr[left];
            left++;

        }
    }
    cout<<-1<<endl;
    
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i =0 ;i<n;i++)
        {
            cin>>arr[i];
        }
        solve(arr,n,k);
         
        
    }
    return 0;
}
/*
Eg.

5 12 
1 2 3 7 5

curr_sum = 0 , left = 0 , right = 0(initial)
curr_sum = 1 , left =0 , right = 1 (curr_sum<k =>curr_sum+=ar[right],right++)
curr_sum = 3 , left = 0 , right = 2(curr_sum<k =>curr_sum+=ar[right],right++)
curr_sum = 6 , left = 0 , right = 3(curr_sum<k =>curr_sum+=ar[right],right++)
curr_sum = 13 , left = 0  , right = 4(curr_sum<k =>curr_sum+=ar[right],right++)
curr_sum = 12 , left = 1 , right = 4(curr_sum>k =>curr_sum-=ar[left],right++)

*/


