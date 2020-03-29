https://practice.geeksforgeeks.org/problems/lcm-and-gcd/0/?track=sp-mathematics&batchId=152
#include <bits/stdc++.h> 
using namespace std; 

long int  gcd(long int a , long int b )
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}

long int lcm(long int a ,long int b ,long int gc )
{
    return a*b/gc;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int a , b;
        cin>>a>>b;
        long int gc= gcd(a,b);
        long int lc =lcm(a,b,gc);
        cout<<lc<<" "<<gc<<endl;
        
    }
    return 0;
}

