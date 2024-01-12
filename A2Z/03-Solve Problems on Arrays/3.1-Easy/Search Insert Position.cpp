class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;

        // The desired index is between (low and high+1)
        while(low <= high){
            int mid = low + (high-low)/2;

            if(nums[mid]< target){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return low;
    }
};
