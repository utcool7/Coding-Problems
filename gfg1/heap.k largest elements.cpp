//https://practice.geeksforgeeks.org/problems/k-largest-elements/0

//time :O(nlogk)
//space:O(n)
#include <bits/stdc++.h>
using namespace std;

int findKLargest(vector<int>& nums, int k) {
        vector <int>res ;
        
        priority_queue < int , vector<int> ,greater<int>> minHeap;
        
        for(int i = 0 ; i < nums.size() ; i++)
        {
            minHeap.push(nums[i]);
            if( minHeap.size() > k )
            {
                minHeap.pop();
            }
            
        }
        while(minHeap.size() )
        {
            res.push_back(minHeap.top());
            //cout << minHeap.top() << " ";
            minHeap.pop();
        }
        for(int i = res.size()-1 ;i >= 0;i--)
           cout << res[i] << " ";
        
        
 }
int main() {
	//code
	int t ;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int k ;
	    cin>>k;
	    vector<int> nums(n);
	    for(int i = 0 ; i < n ;cin>>nums[i++]);
	    findKLargest(nums, k);
	    cout<<endl;
	    
	}
	return 0;
}