class Solution {
public:
    int trap(vector<int>& height) {
        
        int leftMax= 0;
        int rightMax = 0;
        int left = 0;
        int right = height.size()-1;
        int result = 0;
        
        while(left <= right){
            
            if(height[left] <= height[right]){
                if(height[left] >= leftMax)
                    leftMax = height[left];
                else
                    result += (leftMax-height[left]);
                left++;
            }
            
            else{ //if(height[right] <= height[left])
                
                if(height[right] >= rightMax)
                    rightMax = height[right];
                else
                    result += (rightMax-height[right]);
                right--;
            }
            
        }
        return result;
    }
};