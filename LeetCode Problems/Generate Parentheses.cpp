class Solution {
public:
    void solve(string output,int o,int c,vector<string> &v)
    {
        if(o==0 && c==0)
        {
            v.push_back(output);
            return;
        }
        
        
        if(o==c)
        {
            solve(output+"(",o-1,c,v);
        }
        else
        {
            if(o!=0)
            {
                solve(output+"(",o-1,c,v);
            }
            if(o<c)
            {
                solve(output+")",o,c-1,v);
            }
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        string output;
        int o=n;
        int c=n;
        solve(output,o,c,v);
        return v;
        
        
    }
};