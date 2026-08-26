class Solution {
public:
    int compress(vector<char>& s) {
        string ans = "";
        int i = 0, j = 0;
        int n = s.size();
        while(j < n){
            if(s[j]==s[i]) j++;
            else{
                int len = j - i;
                ans.push_back(s[i]);
                if(len != 1) ans += to_string(len);
                i = j;
            }
        }
        // this is for last group
        int len = j - i;
        ans.push_back(s[i]);
        if(len != 1) ans += to_string(len);

        vector<char> ans2(ans.length());
        for(int i=0;i<ans.length();i++){
            ans2[i] = ans[i];
        }
        s = ans2;
        return s.size();
    }
};
