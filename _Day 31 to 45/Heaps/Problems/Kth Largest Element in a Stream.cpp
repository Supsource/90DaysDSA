class KthLargest {
    priority_queue<int, vector<int>, greater<int>> pq;
    int m_k;
public:
    KthLargest(int k, vector<int>& nums) {
        m_k = k;
        // construct priority heap for the k largest numbers
        int i = 0;
        while (i < nums.size()) {
            if (i < k) {
                pq.push(nums[i]);
            }
            else if (nums[i] > pq.top()) {
                pq.pop();
                pq.push(nums[i]);
            }
            i += 1;
        }
    }
    
    int add(int val) {
        if (pq.size() < m_k) {
            // heap does not have enough elements
            pq.push(val);
        }
        else if (val > pq.top()) {
            // heap has k elements
            pq.pop();
            pq.push(val);
        }
        // return 
        if (pq.size() == m_k) return pq.top();
        else return -1;
    }
};