//time : O(log n)
//space : O(1)
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        int start = 0 , end = letters.size() - 1 ;
        char res ;
        while( start <= end )
        {
            int mid = start + (end - start)/2;
            if(letters[mid] == target)
                start = mid+1;
            else if(letters[mid] < target)
            {
                start = mid + 1;  
            }
            else if(letters[mid] >target)
            {
                res = letters[mid];
                end = mid - 1;
            }
            if(start > letters.size() - 1)
            {
                res = letters[0];
                break;
            }
        }
        return res ;
    }
};