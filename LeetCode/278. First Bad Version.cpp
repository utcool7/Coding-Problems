class Solution {
public:
    int firstBadVersion(int n) {
        int start = 0 , end = n - 1 ;
        int result = n;
        
        while(start <= end)
        {
            int mid = start + (end - start)/2;
            if(isBadVersion(mid))
            {
                result = mid ;
                end = mid - 1 ;
                
            }
            else 
            {
                start = mid + 1;
            }
        }
        return result;
    
    }
};