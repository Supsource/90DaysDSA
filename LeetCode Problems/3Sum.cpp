class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      if (nums.size() == 0) return {};
      
      vector<vector<int>> zeroed;
      
      sort(nums.begin(), nums.end());
      
      int i = 0;
      while (nums[i] <= 0 && i < nums.size()) {
        if (i > 0 && nums[i] == nums[i - 1]) {
          ++i; 
          continue;
        }
        
        int begin = i + 1;
        int end = nums.size() - 1;
        
        while (begin < end) {
          int sum = nums[begin] + nums[end];
          
          if (sum < -nums[i] ) begin++;
          else if (sum > -nums[i]) end--;
          else {
            zeroed.push_back({nums[i], nums[begin], nums[end]});
          
            while (begin < end && nums[begin] == zeroed.back()[1]) begin++;
          }
        }
        
        ++i;
      }
      
      return zeroed;
    }
};