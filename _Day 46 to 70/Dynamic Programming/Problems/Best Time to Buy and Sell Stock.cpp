class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int profit=0;
        int minvalue=INT_MAX;
        
        for(int i=0;i<prices.size();i++)
        {
            minvalue=min(minvalue,prices[i]);
            profit=max(profit,prices[i]-minvalue);
        }
        
        return profit;
        
    }
};