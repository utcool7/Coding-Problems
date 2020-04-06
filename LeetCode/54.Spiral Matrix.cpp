//time : O(n)
//space : O(n)
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
         vector <int> res;
        if(matrix.size()==0 || matrix[0].size()==0)
            return res;
        int top , down , left, right;
        top = 0, down = matrix.size()-1 , left = 0 , right = matrix[0].size()-1;
        int dir = 0 ;
       
        while(top <= down && left <= right)
        {
            if( dir == 0 )
            {
                for(int i = left ; i <= right; i++)
                {
                    res.push_back(matrix[top][i]);
                }
                top++;
            }
            else if( dir == 1 )
            {
                for(int i = top ; i <= down; i++)
                {
                    res.push_back(matrix[i][right]);
                }
                right--;
            }
            else if( dir == 2 )
            {
                for(int i = right ; i >= left; i--)
                {
                    res.push_back(matrix[down][i]);
                }
                down--;
            }
            else if( dir == 3 )
            {
                for(int i = down ; i >= top; i--)
                {
                    res.push_back(matrix[i][left]);
                }
                left++;
            }
            dir=(dir+1)%4;
        
        }
        return res;
    }
};