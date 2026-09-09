class Solution {
public:
    void powerSet(int idx, vector<int> ans, vector<int>& arr, vector<vector<int>>& p){
        if(idx == arr.size()){ // I have a subset
            p.push_back(ans);
            return;
        }
        powerSet(idx+1,ans,arr,p); // skip
        ans.push_back(arr[idx]);
        powerSet(idx+1,ans,arr,p); // pick
    }
    vector<vector<int>> subsets(vector<int>& arr) {
        vector<int> ans;
        vector<vector<int>> p;
        powerSet(0,ans,arr,p); 
        return p;
    }
};
