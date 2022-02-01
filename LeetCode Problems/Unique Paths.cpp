class Solution
{
  public:
  int uniquePaths(int m, int n)
  {
    vector<vector<int>> dp(m+1,vector<int>(n+1,-1)) ;
    int x = 1 , y =1 ; // we start from (1,1)
      dp[m][n] = 1 ; // no. of unique paths from destination to itself is 1
    
      return solve(x,y,m,n,dp) ;
  }
  
  int solve(int x, int y, int m, int n, vector<vector<int>>& dp)
  {
    if(x<1 || x>m || y<1 || y>n) // if the current cell doesn't exist return 0
        return 0 ;
      
      if(dp[x][y] != -1) // if answer for this cell is already calculated, return the stored value
         return dp[x][y] ;
     
    dp[x][y] = solve(x,y+1,m,n,dp) + solve(x+1,y,m,n,dp) ; // sum of paths from right cell and bottom cell
    
      return dp[x][y] ;
  }
} ;