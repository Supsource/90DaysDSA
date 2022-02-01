class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        
    int size = nums.size();
    int i = -1;
    int j;
    bool found=false;
    vector<int> arr(2);
    while(i < size-1 && found == false)
    {
        i++;
        j = i + 1;
        while (j < size && found == false)
        {
            if((nums[i] + nums[j]) == target)
                found = true;
            else
            {
                found = false;
                j++;
            }
        }
    }
    if (found==true)
    {
        arr[0] = i;
        arr[1] = j;
    }
    return arr;
    }
};