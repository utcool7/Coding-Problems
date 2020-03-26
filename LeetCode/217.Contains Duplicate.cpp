//Naive solution
//time:O(n^2)
//space:O(1)
//use 2 loops 
for (int i = 0; i < nums.length; ++i) {
        for (int j = 0; j < i; ++j) {
            if (nums[j] == nums[i]) return true;  
        }
    }
    return false;

//sorting solution 
//time:O(nlogn)
// space:O(1)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i= 0;i<int(nums.size())-1;i++)
        {
            if(nums[i]==nums[i+ 1])
                return true;
        }
        return false ;
        
        
    }
};

//unordered map solution
//time:O(n)
// space:O(n)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set <int> s;
        s.insert(nums.begin(), nums.end());
        
        if(s.size() < nums.size()) return true;
        else return false;
        
        
    }
};

//set solution 
//time:O(n)
// space:O(n)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set <int> s;
        s.insert(nums.begin(), nums.end());
        
        if(s.size() < nums.size()) return true;
        else return false;
        
        
    }
};


