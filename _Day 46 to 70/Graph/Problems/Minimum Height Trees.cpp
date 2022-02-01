class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<pair<int, int>>& edges) {
        //corner case
        if ( n <= 1 ) return {0};
        
        //construct a edges search data stucture
        vector<unordered_set<int>> graph(n);
        for (auto e : edges) {
            graph[e.first].insert(e.second);
            graph[e.second].insert(e.first);
        }
        
        //find all of leaf nodes
        vector<int> current;
        for (int i=0; i<graph.size(); i++){
            if (graph[i].size() == 1)  current.push_back(i);
        }
        
        // BFS the graph
        while (true) {
            vector<int> next;
            for (int node : current) {
                for (int neighbor : graph[node]) {
                    graph[neighbor].erase(node);
                    if (graph[neighbor].size() == 1) next.push_back(neighbor);
                }
            }
            if (next.empty()) break;
            current = next;
        }
        return current;
    }
    
};