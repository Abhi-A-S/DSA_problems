class Solution 
{
public:
    bool dfs(int i, int prev, vector<vector<int>>& adj, unordered_set<int>& visited)
    {
        if (visited.count(i))
            return false;

        visited.insert(i);

        for (int j: adj[i])
        {
            if (j == prev)
                continue;

            if (!dfs(j, i, adj, visited))
                return false;
        }

        return true;
    }

    bool validTree(int n, vector<vector<int>>& edges) 
    {
        if (n == 0) 
            return true;
        
        vector<vector<int>> adj(n);
        
        for (auto& edge: edges)
        {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        unordered_set<int> visited;

        return dfs(0, -1, adj, visited) && n == visited.size();
    }
};
