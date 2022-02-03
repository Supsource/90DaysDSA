class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 0 || prices.size() == 1) return 0;
        
        int profit_one = -prices[0];
        int profit_zero_by = 0, profit_zero_y = 0, profit_zero_tt = 0;
        
        for (int i = 1; i < prices.size(); ++i) {
            profit_one = max(profit_one, max(profit_zero_by - prices[i], 
                             profit_zero_y - prices[i]));
            profit_zero_by = max(profit_zero_by, profit_zero_y);
            profit_zero_y = profit_zero_tt;
            profit_zero_tt = profit_one + prices[i];
        }
        
        return max(profit_zero_by, max(profit_zero_y, profit_zero_tt));
    }
};