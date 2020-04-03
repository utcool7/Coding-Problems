
//time : O(n)
//space: O(n)

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map <int,int> mp;
        vector <int> v;
        for(auto i:nums)
        {
            mp[i]+=1;
        }
        for(auto x : mp)
        {
            if(x.second == 2)
                v.push_back(x.first);
        }
        return v;
    }
};

//time : O(n)
//space: O(1)

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector <int> v;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            int index = abs(nums[i])-1;
            if(nums[index]<0)
                v.push_back(index+1);
            nums[index] = -nums[index];
        }
        
        return v;
    }
};