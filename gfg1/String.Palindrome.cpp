//time : O(n)
//space : O(1)

#include <bits/stdc++.h> 
using namespace std; 

bool palindrome(string s , int n)
{
    for(int i = 0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1])
           return false ;
    }
    return true;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n ;
        string s;
        cin>>n>>s;
        if(palindrome(s,n))
        {
            cout<<"Yes"<<endl;
        }
        else
          cout<<"No"<<endl;
        
        
    }
    return 0;
}

