class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<k;i++){ // k elements
            pq.push(arr[i]);
        }
        int i;
        for(i=k;i<arr.size();i++){
            pq.push(arr[i]);
            int top = pq.top();
            pq.pop();
            arr[i-k] = top;
        }
        while(pq.size() > 0){
            int top = pq.top();
            pq.pop();
            arr[i-k] = top;
            i++;
        }
    }
};
