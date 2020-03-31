//time :O(n^2)
//space:O(1)
int findMaxLength(vector<int> &nums) {
        int maxlen = 0;
        for (int start = 0; start < nums.length(); start++) {
            int zeroes = 0, ones = 0;
            for (int end = start; end < nums.length(); end++) {
                if (nums[end] == 0) {
                    zeroes++;
                } else {
                    ones++;
                }
                if (zeroes == ones) {
                    maxlen = max(maxlen, end - start + 1);
                }
            }
        }
        return maxlen;
    }


//time :O(n)
//space:O(n)
// at sum = 0 the position is -1 
// changing all the 0's to -1 
// if sum is already present then look which is 
//max max_result or the difference between 
// the indexes of same sum
//else map the sum


class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> mp;
        int sum = 0;
        int max_res = 0;
        mp[sum]=-1;
        for(auto i = 0;i<nums.size();i++)
        {
            sum+=(nums[i])?1:-1;
            if(mp.count(sum))
            {
                max_res = max(max_res, i - mp[sum]);
            }
            else
            {
                mp[sum]=i;
            }
        }
        return max_res;
    }
};