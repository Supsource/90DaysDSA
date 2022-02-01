class Solution {
public:
    void makeGraph(vector<vector<int>>& connections,vector<int> adj[]){
        for(int i=0; i<connections.size(); i++){
            adj[connections[i][0]].push_back(connections[i][1]);
            adj[connections[i][1]].push_back(connections[i][0]);
        }
    }
    void dfs(vector<int> adj[],int s,vector<bool>& visited,int &nodes,int &paths){
        visited[s] = true;
        nodes++;
        paths += adj[s].size();
        for(int &v:adj[s]){
            if(!visited[v]){
                dfs(adj,v,visited,nodes,paths);
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        vector<int> adj[n];
        vector<bool> visited(n,false);
        int components = 0;
        int nodes = 0;
        int paths = 0;
        int availablePaths = 0;
        makeGraph(connections,adj);
        
        for(int i=0; i<n; i++){
            if(!visited[i]){
                components++;
                dfs(adj,i,visited,nodes,paths);
                availablePaths += (paths/2 - nodes + 1);
                nodes = 0;
                paths = 0;
            }
        }
        if(components == 1)
            return 0;
        int requiredPaths = components - 1;
        if(availablePaths >= requiredPaths)
            return requiredPaths;
        return -1;
        
    }
};