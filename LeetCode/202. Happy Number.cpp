class Solution {
public:
    bool isHappy(int n) {
        
        set <int> mySet;
        int val ;
        int index;
        while(1)
        {
            val = 0;
            while(n)
            {
                index = n%10;
                val+=index*index;
                n = n/10;
            }
            
            if(val == 1)
                return true ;
            if(mySet.find(val) != mySet.end())
                return false;
            
            mySet.insert(val);
            
            n = val;
            
            
        }
        
        return false;
    }
};