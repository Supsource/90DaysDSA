class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0;
        long long ori=x;
        while(x>0){
            int r=x%10;
            x=x/10;
            rev=rev*10+r;
        }
        if(rev==ori){
            return true;
        }
        return false;
    }
};