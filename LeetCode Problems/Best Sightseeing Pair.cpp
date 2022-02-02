class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int ret = INT_MIN;
        int acc = values[0];
        for(int i=1;i<values.size();i++){
            ret = max(ret, acc - 1 + values[i]);
            acc = max(acc-1, values[i]);
        }
        return ret;
    }
};