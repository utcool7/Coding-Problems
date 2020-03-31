//https://practice.geeksforgeeks.org/problems/equilibrium-point/0/?track=md-arrays&batchId=144

// time: O(n)
//space: O(n)

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int flag=1;
        vector <int> v(n),sum(n,0);
        for(int i = 0 ;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n;i++)
        {
            sum[i]=sum[i-1]+v[i];
        }
        if(n==1)
        {
          cout<<1<<endl;
          
        }
        else
        {
           int ts = sum[n-1];
        
           for(int i=1;i<n;i++)
           {
            
                if((ts-sum[i-1]) == sum[i])
                {
                    flag=0;
                    cout<<i+1<<endl;
                    break;
                }
            
            }
            if(flag==1)
              cout<<-1<<endl;
        
        }   
        
    }
    return 0;
}


// time : O(n)
//space : O(n)

int solve(vector <int> &v, int n)
{
    int sum=0;
    int sum_so_far =0;
    sum = accumulate(v.begin(),v.end(),0);
    for(int i=0;i<n;i++)
    {
        sum-=v[i];
        if(sum==sum_so_far)
        {
            return i+1;
            
        }
        sum_so_far+=v[i];
    }
    return -1;
}

// eg. 
// 1 3 5 2 2
// sum = 13

// i=0:
// sum= 12,sum_so_far=0

// i=1:
// sum= 9,sum_so_far=1

// i=2:
// sum= 4,sum_so_far=4
// returns i+1 = 3 

// i=3:
// sum= 2,sum_so_far=9

// i=4:
// sum= 0,sum_so_far=11




    

