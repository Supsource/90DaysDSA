class Solution {
public:
    int optimal_index(vector<int> num, int index){
        int temp_index=index;
        for(int i=index-1;i>-1;i--){
            if(num[i]>=index-i){
                temp_index=i;
            }
        }
        return temp_index;
    }
    int jump(vector<int>& nums) {
        int r=nums.size()-1;
        int steps=0;
        while(r>0){
            r=optimal_index(nums,r);
            steps++;
        }
        return steps;
    }
};