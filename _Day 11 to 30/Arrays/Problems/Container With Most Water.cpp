class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i=0;
        int j=n-1;
        int ans=0;
        int mini=0;
        int width = 0;
        int maxans=INT_MIN;
        while(i<j){
            mini = min(height[i],height[j]);
            width = j-i;
            ans = mini*width;
            if(ans>maxans)maxans=ans;
            if(height[i]<height[j])i++;
            else j--;
        }
        return maxans;
    }
};