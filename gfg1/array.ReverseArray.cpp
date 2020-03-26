//time : O(n)
// space : O(1)
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        fo(i,0,n)
        {
            cin>>arr[i];
        }
        for(int i=n-1;i>=0;i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}