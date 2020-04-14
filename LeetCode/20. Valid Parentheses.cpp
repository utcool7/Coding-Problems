//time : O(n)
//space : O(n)
class Solution {
public:
    bool isValid(string s) {
        
        if(s.length() == 0)
            return true;
        stack < int > sta;
        for(int i =0 ;i<s.length();i++)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
                sta.push(s[i]);
            else if(sta.size() > 0 && ((sta.top()=='(' && s[i] == ')') || (sta.top()=='[' && s[i] == ']') || (sta.top()=='{' && s[i] == '}')) )
            {
                 sta.pop();
            }
            else
            {
                return false ;
            }

        }
        if(sta.size()>0)
            return false ;
        return true ;
        
        
    }
};
