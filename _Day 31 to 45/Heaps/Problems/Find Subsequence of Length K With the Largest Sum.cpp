class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int> tmp = nums;
        nth_element(tmp.begin(), tmp.end()-k, tmp.end()); 
        
        int n = nums.size(), threshold = tmp[n-k], larger = 0; 
        for (auto& x : nums) 
            if (x > threshold) ++larger; 
        int equal = k - larger; 
        vector<int> ans; 
        for (auto& x : nums) 
            if (x > threshold) ans.push_back(x); 
            else if (x == threshold && equal) {
                --equal; 
                ans.push_back(x); 
            }
        return ans; 
    }
};