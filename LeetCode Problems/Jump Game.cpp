class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
		//maxVisit pointer points to the index that could be reached by jumping
        int maxVisit = 0;
        for(int i=0; i<n; i++)
        {
            if(i>maxVisit)	//cannot react i'th index by jumping
                break;

            maxVisit = max(maxVisit, i + nums[i]);
            if(maxVisit >= n-1)	//Can react to last index by jumping
                return true;
        }
        
        return false;
    }
};