//time : O(nlogk)
//space: O(k)


class Solution {
public:
    

    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector <int> res;
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minheap;
        
        unordered_map<int, int> mp;
        
	    for (int i = 0; i < nums.size(); i++)
		    mp[nums[i]]++;
	    for (auto i : mp) 
        {
		     minheap.push({i.second, i.first});
	         if (minheap.size() > k)
		         minheap.pop();
	    }
	    while (minheap.size() > 0) 
        {
		    res.push_back(minheap.top().second);
		    minheap.pop();
	    }
        return res;
    }
};