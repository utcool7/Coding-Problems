//time :O(n)
//space :O(n)
#include <bits/stdc++.h>
using namespace std;

vector <long long int> nextLargest(vector <long long int > &arr ,long long int  n)
{
    vector <long long int> v;
    stack <long long int> s;
    for(int i =n-1 ;i>=0 ;i--)
    {
        if(s.size() == 0)
            v.push_back(-1);
        else if(s.size()>0 && s.top()>arr[i])
        {
            v.push_back(s.top());
        }
        else if(s.size()>0 && s.top()<=arr[i])
        {
            while(s.size()>0 && s.top()<=arr[i])
            {
                s.pop();
                
            }
            if(s.size() == 0)
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(s.top());
            }
        }
        s.push(arr[i]);
            
    }
    reverse(v.begin(),v.end());
    return v ;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n ;
	    cin>>n;
	    vector <long long int> arr(n);
	    for(int i = 0 ;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    vector <long long int> res = nextLargest(arr,n);
	    for(auto x:res)
	    {
	        cout<<x<<" ";
	    }
	    cout<<endl;
	    
	}
	return 0;
}

