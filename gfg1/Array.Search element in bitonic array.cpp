
//time :O(logn)
//space : O(1)
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        if(nums.size() == 1 )
            return 0;
        
        int start = 0 , end = nums.size() - 1 ;
        while( start <= end )
        {
            int mid = start + (end - start)/2;
            if( mid>0 && mid < nums.size() - 1 )
            {
                if( nums[mid] > nums[mid + 1] && nums[mid] > nums[mid - 1] )
                    return mid ;
                else if( nums[mid - 1] > nums[mid] )
                    end = mid - 1;
                else
                    start = mid + 1;
            }
            else if( mid == 0 )
            {
                if(nums[0] > nums[1])
                    return 0;
                else
                    return 1;
            }
            else if(mid == nums.size() - 1)
            {
                if(nums[nums.size() - 1] >nums[nums.size()-2])
                    return nums.size() - 1;
                else 
                    return nums.size() - 2;
            }
        }
        return 0;
        
    }

    int ascSearch(vector<int>& nums, int start , int end) {
        
        int start = 0;
        int end = nums.size() - 1;
        
        while(start <= end )
        {
            int mid = start + ((end - start ) / 2);
            if(target == nums[mid])
                return mid;
            else if(target < nums[mid])
                end = mid - 1;
            else
                start = mid + 1 ;
          
        }
        return -1;        
    } 
    int descSearch(vector<int>& nums, int start , int end) {
    
        while(start <= end )
        {
            int mid = start + ((end - start ) / 2);
            if(target == nums[mid])
                return mid;
            else if(target > nums[mid])
                end = mid - 1;
            else
                start = mid + 1 ;
          
        }
        return -1;        
    } 
    int seachBitonic(vector<int>& nums){
        int start = 0 ;
        int end = nums.size() - 1 ;
        int peak = findPeakElement(nums);
        int ascBsearch = ascSearch(nums, start , peak - 1);
        int descBsearch = descSearch(nums, peak , end);
        return max(ascBsearch, descBsearch);
   
    }
  
};

