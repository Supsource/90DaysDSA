class Solution {
public :
    int binarysearch(vector<int> &v , int l , int h , int x)
    {
        while(l<h)
        {
            int mid = (l+h)/2 ;
            if(v[mid] == x) 
            {
                return mid ;
            }
            else if(v[mid] < x)
            {
                l = mid + 1 ;
            }
            else
            {
                h = mid ;
            }
        }
        return l ;
    }

    int minSubArrayLen(int x , vector<int> &v)
    {
        int ans = v.size() ;
        vector<int> sum ;
        int u = 0 ;
        bool flag = true  ;
        for (int i = 0; i < v.size(); i++)
        {
            u += v[i];
            sum.push_back(u);
            if(u>=x && flag)
            {
                ans = i+1 ;
                flag = false ;
            }
        }
        if(sum[v.size()-1] < x) return 0 ;

        for (int i = 1; i <= v.size(); i++)
        {

            int l = 0 ;
            if(sum[i-1] + x > sum[v.size() -1 ])  break ;
            int j = binarysearch(sum , i , v.size()-1 , sum[i-1]+x) ;
            l = j - i + 1 ;
            ans = min(l , ans) ;
        }
        return ans ;
        
        
    }
};