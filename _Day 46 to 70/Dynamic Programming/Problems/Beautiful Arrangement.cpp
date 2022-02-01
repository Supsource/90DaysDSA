class Solution {
public:
    int dp[1<<15];
    
    int dfs(int n, int i, int mask) {
        if(i == n+1)
            return 1;
        
        if(dp[mask] == -1) {
            int res = 0;
            for(int j=1; j<=n; ++j) {
                if(i%j == 0 || j%i == 0) {
                    int x = (1 << (j-1));
                    if((mask & x) == 0)
                       res += dfs(n, i+1, mask | x);
                }
            }
            dp[mask] = res;
        }
        return dp[mask];
    }
    
    int countArrangement(int n) {
        memset(dp, -1, sizeof(dp));
        return dfs(n, 1, 0);
    }
};