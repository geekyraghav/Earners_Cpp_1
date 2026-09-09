class Solution {
public:
    void generate(string s, int opening, int closing, int n, vector<string>& ans) {
        if(closing == n){
            ans.push_back(s);
            return;
        }
        if(opening < n) generate(s+"(",opening+1,closing,n,ans); // opening
        if(closing < opening) generate(s+")",opening,closing+1,n,ans); // closing
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        generate("",0,0,n,ans);
        return ans;
    }
};
