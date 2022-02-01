    vector< pair<int,double> > g[n]; 
    for(int i=0;i<edges.size();i++){
        g[edges[i][0]].push_back({edges[i][1],succProb[i]});
        g[edges[i][1]].push_back({edges[i][0],succProb[i]});
    }
    
    priority_queue< pair<double, int > > pq;
    vector<double> dist(n, 0); 
    pq.push(make_pair(1, start)); 
    dist[start] = 1;
    
    while (!pq.empty()){ 
        int u = pq.top().second; 
        pq.pop(); 
        for (auto x : g[u]) {
            int v = x.first; 
            double weight = x.second;
            if (dist[v] < dist[u] * weight) 
            {
                dist[v] = dist[u] * weight; 
                pq.push({dist[v], v}); 
            } 
        } 
    }
    return dist[end];