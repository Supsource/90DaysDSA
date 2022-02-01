image
class Solution {
public:
    
    bool checkIfExists(vector<vector<int>>& graph, vector<bool>& visited,int target,int current) {
        
        if(visited[current] == true) return false;
        
        if(current == target) return true;
        
        visited[current] = true;
        
        for(int ctr = 0 ; ctr < graph[current].size(); ctr++) {
            if(checkIfExists(graph,visited,target,graph[current][ctr])) return true;
        }
        
        return false;
        
    }
    
    bool validPath(int n, vector<vector<int>>& edges, int &start, int &end) {
        
        vector<vector<int>> graph(n);
        
        for(int ctr = 0 ; ctr < edges.size() ; ctr ++) {
            
            int first = edges[ctr][0], second = edges[ctr][1];
            
            graph[first].push_back(second);
            graph[second].push_back(first);
            
        }
        
        vector<bool> visited(n,false);
        
        for(int ctr = 0 ; ctr < graph.size() ; ctr++) {
            if(start == ctr && checkIfExists(graph,visited,end,ctr)) return true;
        }
        
        return false;
        
    }
};
