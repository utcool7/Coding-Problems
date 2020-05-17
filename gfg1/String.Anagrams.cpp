// https://practice.geeksforgeeks.org/problems/anagram/0/?track=md-string&batchId=144

// time : O(nlogn)
// space: O(1)

#include <bits/stdc++.h>
using namespace std;

int solve(string s1 , string s2)
{
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2)
      return 1;
    return 0;  
    
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        if(solve(s1,s2))
           cout<<"YES"<<endl ;
        else
           cout<<"NO"<<endl ;
    }
    return 0;
}

//time : O(n)
//space :O(1)
class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length()!=t.length())
            return false;
        int map[26]={0};
        for(int i=0;i<s.length();i++)
        {
            map[s[i]%26]++;
            map[t[i]%26]--;
            
        }
        for(int i=0;i<26;i++)
            if(map[i]!=0)
                return false;
        return true ;
    }
};
