// Naive-solution

// time : O(n+m)
// space : O(n+m)

class Solution {
public:
    bool backspaceCompare(string S, string T) {
        string r1 = "";
        string r2 = "";
        
        int i = 0;
        
        while( S[i] != '\0' )
        {
            if( S[i] >= 'a' && S[i] <= 'z' )
                r1 += S[i];
            
            else if(!r1.empty())
                r1.pop_back();
            
            i++;
        }
        
        i = 0;
        
        while( T[i] != '\0' )
        {
            if( T[i] >= 'a' && T[i] <= 'z' )
                r2 += T[i];
            
            else if(!r2.empty())
                r2.pop_back();
            
            i++;
        }
        
        if(r1.compare(r2) == 0)
            return true;
        
        return false;
        
    }
};



// optimized solution

// time : O(n+m)
//space : O(1)

class Solution {
public:
    int getNextValidIdx(string &str, int i) {
      int skip_count = 0;
      while(i >= 0 && (str[i] == '#' || skip_count > 0) )  
      {
        str[i] == '#' ? ++skip_count : --skip_count;
        --i;
      }
      return i;
    }
    bool backspaceCompare(string S, string T) {
      int s_idx = S.size() - 1, t_idx = T.size() - 1;
      while(s_idx >= 0 || t_idx >= 0)
      {
        s_idx = getNextValidIdx(S, s_idx);
        t_idx = getNextValidIdx(T, t_idx);
          
        if(s_idx < 0 != t_idx < 0) 
        {
          return false;
        }
          
        if(s_idx >= 0 && t_idx >= 0 && S[s_idx] != T[t_idx]) 
        {
          return false;
        }
        --s_idx, --t_idx;
      }
      return true;
    }
};
