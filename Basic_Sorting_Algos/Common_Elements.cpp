class Solution {
  public:
    vector<int> commonElements(vector<int> &a, vector<int> &b) {
        vector<int> ans;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int m = a.size(), n = b.size();
        int i = 0, j = 0;
        while(i<m && j<n){
            if(a[i] < b[j]) i++;
            else if(b[j] < a[i]) j++;
            else{
                ans.push_back(a[i]);
                i++;
                j++;
            }
        }
        return ans;
    }
};
