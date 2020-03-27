
// time: O(n)
//space: O(1)
#include <bits/stdc++.h>
using namespace std;

int leader(int n)
{
   if (n ==0 || n<0) 
     { 
        cout << n << " "; 
        return 0;   
     } 
    
    cout<<n<<" ";
    leader(n-5);
    cout<<n<<" ";

}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        leader(n);
        cout<<endl;
        
    }
    return 0;
}