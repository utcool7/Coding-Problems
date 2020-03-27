//practice.geeksforgeeks.org/problems/reverse-digit/0/?track=sp-recursion&batchId=152
// time: O(logn)
//space: O(1)
#include <bits/stdc++.h>
using namespace std;

long long int leader(long long int n,long long int num)
{
   if(n==0)
   {
       return num;
   }
   int r = n%10;
   num=num*10+r;
   leader(n/10,num);
   
   
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        cout<<leader(n,0)<<endl;
       
        
    }
    return 0;
}