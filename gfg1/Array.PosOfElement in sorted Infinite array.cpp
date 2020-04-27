// time :O(logn)
//space : O(1)

int position(vector <int> nums, int target)
{
    int start = 0 , end = 1  ;
    while(target > nums[end])
    {
        start = end;
        end = end * 2 ;
    }
    while( start <= end )
    {
        int mid = start + (end -start)/2;
        if(nums[mid] == target )
            return mid;
        
        if(nums[mid] > target)
            end = mid - 1 ;
        else
            start = mid + 1;
    }
    
}