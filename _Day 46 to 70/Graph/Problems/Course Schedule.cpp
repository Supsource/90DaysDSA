class Solution {
    int n;
    vector<vector<int>>v;
    
    bool dfs_cycle(vector<int>&color,int k){
        
        color[k]=1;
        for(auto x:v[k]){
            if(color[x]==1)return true;
            if(color[x]==0 && dfs_cycle(color,x))return true;
        }
        color[k]=2;
        return false;
    }
    
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        n=numCourses;
        vector<vector<int>>tmp(n+1);
        v=tmp;
        for(auto x:prerequisites)v[x[1]].push_back(x[0]);
        vector<int>color(n+1,0);
        for(int i=1;i<=n;i++){
            if(color[i]==0 && dfs_cycle(color,i))return false;
        }
        return true;
    }
};