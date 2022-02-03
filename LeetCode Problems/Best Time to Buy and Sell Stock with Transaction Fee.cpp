class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size(),maxfromhere=prices[n-1]-fee;
        vector<int> dp(n);
        dp[n-1]=0;
        int flag=0;
        for(int i=n-2;i>=0;i--)
        {
            maxfromhere = max(maxfromhere,prices[i]+dp[i+1]-fee);
            dp[i]=max(dp[i+1],maxfromhere-prices[i]);
        }
        return dp[0];
    }
};