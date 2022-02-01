class Solution {
public:
    string longestPalindrome(string s) {
        const int n = s.size();
        if(n==2 && s[0]==s[1]) return s;
        int lMax=0; // Indexes of
        int rMax=0; // the Palindrome
        for(int i=1;i<n-1;i++){
            int r = i+1; // We check the 
            int l = i-1; // adjacent letters
            bool u = true; 
            while(l>=0 && r<n){
                bool c = true;
                if(s[l]==s[r]){
                    r++;
                    l--;
                    c = false; // we do not 'break' at the end of the while loop
                    if(s[l+1]!=s[i]) u=false; // It means it is a Palindrome with different letters
                }
                if(u && l>=0 && s[l]==s[l+1]){ // we check on the left
                    l--;
                    c = false;
                }
                if(u && r<n && s[r]==s[r-1]){ // we check on the right
                    r++;
                    c = false;
                }
                if(c) break;
            }
            if(r-l-1>rMax-lMax){
                rMax = r-1; 
                lMax = l+1;
            }
            if(rMax-lMax > n-i && i>=n/2) break; // for sure we have found the longest Palindrome
        }
        return s.substr(lMax,rMax-lMax+1);
        
    }
};