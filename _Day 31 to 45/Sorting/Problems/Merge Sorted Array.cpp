class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = n-- + m-- - 1;
        while (m >= 0 && n >= 0) {
            if (nums1[m] >= nums2[n])
                swap(nums1[m--], nums1[i--]);
            else
                nums1[i--] = nums2[n--];
        }
        
        while (n >= 0)
            nums1[i--] = nums2[n--];
    }
};