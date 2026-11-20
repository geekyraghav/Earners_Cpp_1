class Solution {
public:
    int findKthLargest(vector<int>& arr, int k) {
        priority_queue<int,vector<int>,greater<int>> pq; // minheap of max size k
        for(int ele : arr){
            pq.push(ele);
            if(pq.size() > k) pq.pop();
        }
        return pq.top();
    }
};
