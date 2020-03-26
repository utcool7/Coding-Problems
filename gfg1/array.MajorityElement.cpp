//naive approach 
// time: O(n^2)
//space: O(1)
#include <bits/stdc++.h>
using namespace std;
int majorityElement(int arr[],int n )
{
    for(int i =0;i<(n/2)+1;i++)
    {
        int count=0;
        for(int j =0;j<n;j++)
        {
            if(arr[i]==arr[j])
               count++;
               
        }
        if(count>n/2)
          return arr[i];
    }
    return -1;
    
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
        cout<<majorityElement(arr,n)<<endl;
    }
    return 0;
}

// time: O(n)
//space: O(n)
#include <bits/stdc++.h>
using namespace std;
int majorityElement(int arr[],int n )
{
    unordered_map <int , int> mp;
    for(int i=0;i<n ;i++)
    {
        mp[arr[i]]+=1;
        
    }
    for(auto x: mp)
    {
        if(x.second >n/2) return x.first;
        
    }
    return -1;
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
        cout<<majorityElement(arr,n)<<endl;
    }
    return 0;
}

//moore's voting algorithm  
// time: O(n)
//space: O(1)
// find the candidate which can be the majority element and 
// then check whether that element is actually the majority element 
#include <bits/stdc++.h>
using namespace std;
int findCandidate(int arr[], int n)
{
    int majority_index = 0;
    int count=1 ;
    for(int i=1;i<n;i++)
    {
        if(arr[i]==arr[majority_index])
        {
            count++;
        }
        else
        {
            count--;
            
        }
        if(count==0)
        {
            majority_index = i;
            count=1;
        }
    }
    return arr[majority_index];

    
}

int isMajority(int arr[], int n, int candidate)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(candidate== arr[i])
           count++;
        if(count>n/2)
           return 1;
    }
    return 0;
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
        int candidate = findCandidate(arr , n);
        if(isMajority( arr ,n, candidate)) cout<<candidate<<endl;
        else cout<< -1<<endl;
        
    }
    return 0;
}