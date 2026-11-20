class Solution {
  public:
    int minCost(vector<int>& arr) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int ele : arr){
            pq.push(ele);
        }
        int cost = 0;
        while(pq.size() > 1){
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            cost += (a+b);
            pq.push(a+b);
        }
        return cost;
    }
};
