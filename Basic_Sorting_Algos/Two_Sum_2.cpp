class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        vector<int> ans(2);
        int n = arr.size();
        int i = 0, j = n-1;
        while(i<j){
            if(arr[i] + arr[j] > target) j--;
            else if(arr[i] + arr[j] < target) i++;
            else{
                ans[0] = i + 1;
                ans[1] = j + 1;
                break;
            }
        }
        return ans; // TC = O(n)
    }
};
