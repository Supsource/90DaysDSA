class Solution {

public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.length();
        int m = p.length();
        if(m > n) return {};
        vector<int> ans;
        vector<int> fq_p(26,0);
        vector<int> fq_s(26,0);
        
        // Initial Window:
        for(int i=0; i<m; i++) {
            fq_p[p[i]-'a']++;
            fq_s[s[i]-'a']++;
        }
        
        if(fq_p == fq_s) ans.push_back(0);
        
        // Sliding the Window:
        for(int i=m; i<n; i++) {
            // excluding the first character of the window
            fq_s[s[i-m]-'a']--;
            
            // Now including the i'th character into the window
            fq_s[s[i]-'a']++;
            
            if(fq_s == fq_p) ans.push_back(i-m+1);
        }
        
        return ans;
        
    }
};