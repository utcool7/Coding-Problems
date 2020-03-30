#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int s;
	int base=1;
	cin>>s;
	int r;
	int res=0;
	while(s>0)
	{
	    r = s%10;
	    s=s/10;
	    res = base*r+ res;
	    base=base*2;
	    
	}
	cout<<res<<endl;
	
}
