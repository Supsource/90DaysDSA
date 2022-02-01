class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1 = INT_MIN;
        int flag = 0;
        for(int i = 0;i<nums.size();i++){
            if(max1 < nums[i]){
                max1 = nums[i];
                flag = i;
            }
        }
        int max2=  INT_MIN;
        for(int i = 0;i< nums.size();i++){
            if(nums[i] > max2 && i != flag) max2 = nums[i];
        }
        
        return (max2 - 1) * (max1 - 1);
    }
};