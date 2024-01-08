class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        set<vector<int>> setu;
        int n = nums.size(), i=0, j=n-1;
        for(int t=0; t<n-2; t++)    {
            int element = nums[t], sum = 0-element;
            i=t+1; j=n-1;
            while(i < j)    {
                if(nums[i] + nums[j] == sum)    {
                    setu.insert({element, nums[i], nums[j]});
                    i++; j--;
                }
                else if(nums[i] + nums[j] > sum)    j--;
                else    i++;
            }
        }
        for(auto it : setu) ans.push_back(it);
        return ans;
    }
};