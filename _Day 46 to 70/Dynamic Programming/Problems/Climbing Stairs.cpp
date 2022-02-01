class Solution {
public:
    int climbStairs(int n) {
        
            if( n < 0)
            {
                    return 0;
            }
            
            if( n == 0)
            {
                    return 1;
            }
            
            int result_arr[46] = {0};
            result_arr[0] = 0;
            result_arr[1] = 1;
            result_arr[2] = 2;
            result_arr[3] = 3;

            for(int i = 4; i<=n; i++)
            {
                    result_arr[i] = result_arr[i-1] + result_arr[i-2];
            }

            int result = result_arr[n];
            return result;
    }
};