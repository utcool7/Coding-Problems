// time : O(log n)
// space :O(1)
#include <bits/stdc++.h>
using namespace std;

int floorInSorted(vector <int> v, int n , int target )
{
    int start = 0 , end = n - 1;
    int res = -1 ;
    while( start <= end)
    {
        int mid = start + (end - start )/2;
        if(v[mid] == target)
            return mid;
        if(v[mid] < target)
        {
            res = mid;
            start = mid + 1;
            
        }
        else if(v[mid] > target)
            end = mid - 1;
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int target ;
        cin>>target;
        vector <int> v(n);
        for(int i = 0 ;i<n ;i++)
           cin>>v[i];
        cout<<floorInSorted(v,n,target)<<endl;   
    }
    return 0;
}