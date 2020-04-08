//time : O(n)
//space : O(n) {for stack }

#include <bits/stdc++.h>
using namespace std;

bool checkPara(string s , int n )
{
    stack <char> d;
    int flag=1 ;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='{' || s[i]=='(' || s[i]=='[' )
        {
            d.push(s[i]);
        }
        else if(!d.empty() && ((d.top()=='{' && s[i]=='}') || (d.top()=='(' && s[i]==')') || (d.top()=='['&& s[i]==']')))
        {
            
            d.pop();
            
        }
        else
        {
            flag=0;
            break;
        }
    }
    if(d.empty() && flag==1 )
    {
        return true;
    }
    
    return false;
    
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s ;
	    cin>>s;
	    if(checkPara(s,s.length()))
	    {
	        cout<<"balanced"<<endl;
	    }
	    else
	    {
	        cout<<"not balanced"<<endl;
	    }
	}
	return 0;
}