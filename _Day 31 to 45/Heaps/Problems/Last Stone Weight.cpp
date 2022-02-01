class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int i=0;i<stones.size();i++)
        {
            pq.push(stones[i]);
        }
        int m1,m2;
        while(!pq.empty())
        {
            if(pq.size()==1)
                return pq.top();
            m1=pq.top();
            pq.pop();
            m2=pq.top();
            pq.pop();
            
            if(m1!=m2)
                pq.push(m1-m2);
        }
            return 0;
        
    }
};