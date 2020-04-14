//time :O(nlogn)
// space : O(1)
class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length()!=t.length())
            return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t )
            return true ;
        else 
            return false;
    }
};

//time :O(n)
//space:O(1)
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