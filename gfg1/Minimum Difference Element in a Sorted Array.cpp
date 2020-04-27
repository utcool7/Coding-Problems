
// array[] : 1 3 8 10 15
// element : 12

// abs diff : 11 9 4 2 3 
// ans = 10(as min difference is 2)


// time : O(logn)
//space : O(1)
int minDiff(vector <int> v , int target)
{
    int start = 0 , end = v.size() - 1;
    while(start <= end)
    {
        int mid = start +( end -start )/2;
        if(v[mid] == target)
            return arr[mid];
        if(v[mid]>target)
            start = mid + 1;
        else
            end = mid -1 ;        
    }
    int ch1 = abs(arr[start] - target);
    int ch2 = abs(arr[end] - target);
    if(min(ch1,ch2) == ch1 )
        return v[start];
    return v[end];    
}