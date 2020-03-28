//practice.geeksforgeeks.org/problems/reversing-the-vowels/0/?track=sp-strings&batchId=152
//time : O(n)
//space : O(n)

#include <bits/stdc++.h> 
using namespace std; 

void revVowel(string s)
{
    list <char> vow;
    auto it = vow.begin();
    vector <int> pos;
  
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            vow.push_front(s[i]);
            pos.push_back(i);
        }
        
    }
    
    
        
    
    for(auto x: pos)
    {
      
        char d = vow.front();
        vow.pop_front();
        
        s[x]=d;
    }
    cout<<s<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        revVowel(s);
    }
    return 0;
}

