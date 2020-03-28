//time: O(time to print one permutation*total no. of permutation )
//time:O(n*n!)
//space : O(1)
#include <bits/stdc++.h> 
using namespace std; 

void permute(string a, int l, int r) 
{ 
	
	if (l == r) 
		cout<<a<<" "; 
	else
	{ 
		// Permutations made 
		for (int i = l; i <= r; i++) 
		{ 

			swap(a[l], a[i]); 
			permute(a, l+1, r); 
			swap(a[l], a[i]); // to backtrack 
		} 
	} 
} 

// Driver Code 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s ;
        cin>>s;
        permute(s,0,s.length()-1);
        cout<<endl;
        
    }
    return 0;
}

