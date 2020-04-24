//time : O(logn)
//space : O(1)
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0, end = nums.size()-1;
        while(start<= end)
        {
            int mid = start + (end - start)/2;
            if(nums[mid] == target)
                return mid;
            if(mid-1>=start && nums[mid-1] == target)
                return mid - 1 ;
            if(mid+1 <= end && nums[mid+1] == target)
                return mid + 1;
            if(target<nums[mid])
                end = mid - 2 ;
            else
                start = mid + 2;
        }
        return -1 ;
    }
};