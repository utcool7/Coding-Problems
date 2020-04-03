//naive solution 
// time : O(n^2)
// space : O(1)

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> v;
        for(auto i=0 ; i< nums.size() ; i++ )
        {
            int prod = 1 ;
            for(auto j=0;j<nums.size();j++)
            {
                if(i!=j)
                    prod*=nums[j];
            }
            v.push_back(prod);
        }
        return v;
        
    }
};

//time : O(n)
//space : O(n)
//use two array left and right 

// time : O(n)
// space : O(1)[as no extra space is used instead of answer array]
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector <int> v(n,1);
        int left = 1, right = 1;
        for(int i = 0 ; i < n ; i++ )
        {
            v[i] = left*v[i];
            v[n-i-1] = right*v[n-i-1];
            left*=nums[i];
            right*=nums[n-i-1];
        }
        return v;       
        
    }
};


