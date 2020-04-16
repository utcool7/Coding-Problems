//time : O(n^2)
//space : O(1)
class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size()==0 || height.size()==1)
            return 0;
        
        int ans = 0;
        for(int i=0;i<height.size();i++)
        {
            int lmax = 0 , rmax = 0 ;
            for(int j=i;j>=0 ;j--)
                lmax = max(lmax,height[j]);
            for(int j=i;j<height.size() ;j++)
                rmax = max(rmax,height[j]);
            ans+=min(lmax, rmax)- height[i];
        }
        return ans;
        
    }
};


//time : O(n)
//space : O(n)
class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size()==0 || height.size()==1)
            return 0;
        
        vector <int> mxl(height.size()),mxr(height.size());
        
        mxl[0]=height[0];
        for(int i=1 ;i<height.size();i++)
            mxl[i] = max(mxl[i-1],height[i]);
        
        mxr[height.size()-1] = height[height.size()-1];
        for(int i = height.size()-2 ;i>=0 ;i--)
        {
            mxr[i] = max(mxr[i+1],height[i]);
        }
        vector <int> water(height.size());
        for(int i = 0 ; i<height.size() ;i++)
            water[i] = min(mxl[i],mxr[i]) - height[i];
        int sum = 0;
        for(int i = 0 ;i<height.size();i++)
            sum+=water[i];
        return sum;
        
    }
};