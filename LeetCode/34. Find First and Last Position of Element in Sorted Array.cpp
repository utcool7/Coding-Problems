//linear search 
//time: O(n)
//space:O(1)


//binary search
//time : O(log n)
//space : O(1)
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int> res;
        int start = 0 , end = nums.size()-1;
        int ans = -1;
        while(start <= end)
        {
            int mid = start + ((end - start)/2);
            if(target == nums[mid])
            {
                ans = mid;
                end = mid - 1 ;
            }
            else if(nums[mid] > target)
                end = mid - 1 ;
            else
                start = mid + 1 ;
                
        }
        res.push_back(ans);
        ans = -1 ;
        start = 0 , end = nums.size()-1;

        while(start <= end)
        {
            int mid = start + ((end - start)/2);
            if(target == nums[mid])
            {
                ans = mid;
                start = mid + 1 ;
            }
            else if(nums[mid] > target)
                end = mid - 1 ;
            else
                start = mid + 1 ;
                
        }
        res.push_back(ans);
        
        return res;
    }
    
};