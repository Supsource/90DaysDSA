class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int mini = nums[0]; 
        int ans = -1;

        for(int i = 0; i != nums.size(); i++){
            if(nums[i] > mini) ans = max(ans, nums[i] - mini);
            else mini = min(nums[i], mini);

            
        }
        return ans;
    }
};
