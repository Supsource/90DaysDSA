class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        if (mat.size() == 0){
            return mat;
        }
        int rows = mat.size(), cols = mat[0].size();  
        // no overflow
        vector<vector<int>> dp(rows,vector<int> (cols, INT_MAX-2));
        for (int i = 0; i < rows; i++){
            for (int j = 0; j < cols; j++){
                if (mat[i][j] == 0){
                    dp[i][j] = 0;
                }
                if (i > 0){
                    dp[i][j] = min(dp[i][j],dp[i-1][j]+1);
                }
                if (j > 0){
                    dp[i][j] = min(dp[i][j],dp[i][j-1]+1);
                }
            }
        }
        for (int i = rows-1; i > -1; i--){
            for (int j = cols-1; j > -1; j--){
                if (i < rows-1){
                    dp[i][j] = min(dp[i][j],dp[i+1][j]+1);
                }
                if (j < cols-1){
                    dp[i][j] = min(dp[i][j],dp[i][j+1]+1);
                }
            }
        }
     return dp;   
    }
};