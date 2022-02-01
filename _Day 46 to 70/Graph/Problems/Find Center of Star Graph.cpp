class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size()+2;
        vector <int> adj[n];
        for(int i=0; i<edges.size(); i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
    
        for(int i=0; i<n; i++)
            if(adj[i].size()==edges.size())
                return i;
        
        return -1;
    }
};