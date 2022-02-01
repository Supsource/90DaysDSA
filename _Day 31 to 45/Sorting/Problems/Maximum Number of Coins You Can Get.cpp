class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int hash[10001] = {0};
        for (auto x: piles){
            hash[x]++;
        }
        int last = 10000;
        int front = 0;
        int n = ((piles.size()/3) );
        int ans = 0;
        while (n--){
            while (last > 0 && hash[last] == 0) last--;
            hash[last]--;
            while (last > 0 && hash[last] == 0) last --; // second largest
            ans += last;
            hash[last]--;
        }
        return ans;
    }
};