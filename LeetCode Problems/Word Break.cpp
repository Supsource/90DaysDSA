class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector dp(s.length() + 1, false);
        dp[s.length()] = true;
        unordered_set dict(wordDict.begin(), wordDict.end());
        for (int i = s.length() - 1; i >= 0; i--) {
            for (int j = i; j <= s.length() - 1; j++) {
                if (dp[j + 1] && dict.find(s.substr(i, j - i + 1)) != dict.end()) {
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[0];
    }
};