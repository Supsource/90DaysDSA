class Solution {
public:
    int calculate_length(int curr, int ind, unordered_map<int,int>&last_index){
        if(last_index.count(curr)){
            int prevIdx = last_index[curr];
            int length = ind-prevIdx;
            return length;
        }
        else
            return 0;
    }
    int findMaxLength(vector<int>& nums) {
        int num_zeroes = 0, num_ones = 0;
        const int ZERO  = 0;
        int max_length = 0;
        unordered_map<int,int>last_index;
        int ind = 0;
        int curr = 0;
        last_index[0] = -1;
        for(const auto&val:nums){
            if(val==ZERO)
                curr--;
            else 
                curr++;
            max_length = max(max_length, calculate_length(curr, ind, last_index));
            
            if(!last_index.count(curr))
                last_index[curr] = ind;
            
            ind++;
        }
        return max_length;
    }
};