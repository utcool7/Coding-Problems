//naive solution 
//time : O(n^2)
//space : O(1)
//use 2 loops 
// fix an element and find whether 
// the same element is present in the array 
// or not if present then return the element 



//time :O(n)
//space : O(n)
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> times;
        
        for(auto num : nums) times[num]++;
        
        unordered_map<int, int>::iterator itr;
        for(itr = times.begin(); itr != times.end(); itr++){
            if(itr->second == 1) return itr->first;
        }
        
        return 0;
    }
};

//time : O(n)
//space : O(1)
//using the properties:
// x^x = 0
// x^0 = x 
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x = 0;
        for(int i = 0 ; i < nums.size() ; i++ )
            x^=nums[i];
        return x;
    }
};


