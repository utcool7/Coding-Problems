//time : O(n)
//space: O(n)
class Solution {
public:
    vector <int> NSL(vector <int> &heights)
    {
        vector <int> left ;
        stack <pair<int,int> > s ;
        int pseudo_ind = -1 ;
        for(int i=0 ; i<heights.size() ;i++)
        {
            if(s.size()==0)
                left.push_back(pseudo_ind);
            else if(s.size()>0 && s.top().first<heights[i])
            {
                left.push_back(s.top().second);
            }
            else if(s.size()>0 && s.top().first>=heights[i])
            {
                while(s.size()>0 && s.top().first>=heights[i])
                {
                    s.pop();
                }
                if(s.size()==0)
                    left.push_back(pseudo_ind);
                else
                    left.push_back(s.top().second);
            }
            s.push({heights[i],i});
        }
        return left;
        
    }
    vector <int> NSR(vector <int> &heights)
    {
        vector <int> right ;
        stack <pair<int,int> > s ;
        int pseudo_ind = heights.size() ;
        for(int i=heights.size()-1 ; i>=0 ;i--)
        {
            if(s.size()==0)
                right.push_back(pseudo_ind);
            else if(s.size()>0 && s.top().first<heights[i])
            {
                right.push_back(s.top().second);
            }
            else if(s.size()>0 && s.top().first>=heights[i])
            {
                while(s.size()>0 && s.top().first>=heights[i])
                {
                    s.pop();
                }
                if(s.size()==0)
                    right.push_back(pseudo_ind);
                else
                    right.push_back(s.top().second);
            }
            s.push({heights[i],i});
        }
        reverse(right.begin(),right.end());
        return right;
        
    }
    int largestRectangleArea(vector<int>& heights) {
        if(heights.size()==0)
            return 0;
        vector<int> left = NSL(heights );
        vector<int> right = NSR(heights);
        vector <int> width(heights.size()) ,area(heights.size());
        for(int i= 0 ;i<heights.size();i++)
        {
            width[i]=right[i] - left[i]-1;
            
        }
        int maximum = -1;
        for(int i= 0 ;i<heights.size();i++)
        {
            area[i] = width[i]*heights[i];
            if(area[i]>maximum)
                maximum = max(maximum,area[i]);
                
            
        }
        return maximum ;
        
        
    }
};