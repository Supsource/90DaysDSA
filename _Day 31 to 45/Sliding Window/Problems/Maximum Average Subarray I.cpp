class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
        double maxAverage = INT_MIN;
        for (int i = 0; i < (nums.size() - k + 1); i++) {
            double curTotal = 0.0;
            for (int j = i; j < i + k; j++) {
                curTotal += nums[j];
            }
            double curAverage = curTotal / k;
            maxAverage = max(maxAverage, curAverage);
        }
        return maxAverage;
    }
};