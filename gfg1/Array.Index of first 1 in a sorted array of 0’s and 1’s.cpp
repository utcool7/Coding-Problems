//time : O(logn)
//space :O(1)
 

//https://practice.geeksforgeeks.org/problems/index-of-first-1-in-a-sorted-array-of-0s-and-1s/0
#include <bits/stdc++.h>
using namespace std;

int firstIndex(vector <int> v , int n )
{
    int start = 0 , end = n-1;
    int res = -1 ;
    while(start <=end )
    {
        int mid = start + (end - start)/2;
        if(v[mid] == 1 )
        {
            res = mid ;
            end = mid - 1;
        }
        else if(v[mid] < 1)
            start = mid + 1 ;
        else
            end = mid - 1 ;
    }
    return res ;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector <int> v(n);
	    for(int i = 0 ;i < n ; cin>>v[i++]);
	    cout<<firstIndex(v,n)<<endl;
	    
	}
	return 0;
}