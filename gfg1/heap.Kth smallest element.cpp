//time : O(nlogk)
//space : O(k)
//https://practice.geeksforgeeks.org/problems/kth-smallest-element/0
#include <bits/stdc++.h>
using namespace std;

int call(vector <int>v , int n,int k)
{
    priority_queue <int > maxh;
    for(int i = 0 ; i < n ;i++)
    {
        maxh.push(v[i]);
        if(maxh.size() > k)
            maxh.pop();
            
    }
    return maxh.top();
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <int > v(n);
        for(int i =0 ; i<n;cin>>v[i++]);
        int k;
        cin>>k;
        cout<<call(v,n,k)<<endl;
        
    }
}