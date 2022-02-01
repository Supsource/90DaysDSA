class Solution {
public:
    int maxSumRangeQuery(vector<int>& nums, vector<vector<int>>& r) {
        //Step - 1
        vector<int>count(nums.size(), 0);
        //Step - 2
        for(int i = 0; i < r.size(); i++){
            count[r[i][0]]++;
            if(r[i][1] + 1 < nums.size()){
                count[r[i][1] + 1]--;
            }
        }
        //Step - 3
        for(int i = 1; i < nums.size(); i++){
            count[i] += count[i - 1];
        }
        //Step - 4
        sort(count.begin(), count.end());
        sort(nums.begin(), nums.end());
        //Step - 5
        long long int sum = 0;
		int mod = (int)1e9 + 7;
        for(int i = 0; i < nums.size(); i++){
            sum += count[i] * nums[i];
            sum %= mod;
        }
        return int(sum);
    }
};