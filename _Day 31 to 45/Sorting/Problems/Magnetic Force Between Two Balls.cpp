class Solution {
public:
    
    bool check(vector<int> &pos, int mid, int m)
    {
        int n = pos.size(); //no of buckets
        int prev = 0; //idx of previous ball placed
        int cur = 1; //no of balls placed
        
        for(int i=1; i<n; i++)
        {
            if(pos[prev] + mid > pos[i])
            {
                continue;
            }
            else
            {
                prev = i;
                cur++;
            }
        }
        //cout<<cur;
        
        if(cur >= m) return true;
        else return false;
    }
    
    int maxDistance(vector<int>& pos, int m) 
    {
        sort(pos.begin(), pos.end());
        
        int lo = 1; //minimum possible distance between any two balls
        int hi = pos[pos.size()-1] - pos[0]; //maxm possible distance between any two balls
        
        //we want to BS on minm possible distance between two balls
        while(lo < hi)
        {
            int mid = (lo + hi + 1)/2;
            
            //check if mid distance is possible as minm b/w two balls.
            //and all balls can be placed as such
            if(check(pos, mid, m))
                //we want to maximise minm distance, so agar mid pe possible hai, set lo = mid
                lo = mid;
            
            else
                hi = mid-1;
            
           // cout<<lo<<" ";
        }
        return lo;
    }
};