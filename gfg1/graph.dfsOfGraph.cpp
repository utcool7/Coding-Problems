
//time : O(N + E)
//space : O(N)
void dfs(int s, vector<int> g[], bool vis[])
{
    
    // Your code here
    stack <int> stack;
    stack.push(s);
    while(!stack.empty())
    {
        s=stack.top();
        stack.pop();
        
        if(!vis[s])
        {
            cout<<s<<" ";
            vis[s] = true;
        }
        for(auto it:g[s])
        {
            if(!vis[it])
            {
              stack.push(it);
            }
        }
    }

}

OR

void dfs(int s, vector<int> g[], bool vis[])
{
    
    // Your code here
    vis[s]= true;
    cout<<s<<" ";
    for(auto it:g[s])
    {
        if(!vis[it])
          dfs(it,g,vis);
    }

}