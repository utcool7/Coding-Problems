//time :O(N+E)
//space : O(N)
void bfs(int s, vector<int> adj[], bool vis[], int N)
{
    // Your code here
    queue <int> q;
    q.push(s);
    while(!q.empty())
    {
        int s = q.front();
        q.pop();
        vis[s]=true;
        cout<<s<<" ";
        for(auto it : adj[s])
        {
            if(!vis[it])
            {
                vis[it]= true;
                q.push(it);
            }
        }
        
    }
}