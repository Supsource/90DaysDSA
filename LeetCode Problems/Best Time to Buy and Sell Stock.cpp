/*
You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
*/


// Ans :

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




// Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
