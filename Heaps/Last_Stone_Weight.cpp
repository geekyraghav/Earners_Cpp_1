class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int ele : stones){
            pq.push(ele);
        }
        while(pq.size() >= 2){
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            if(a != b) pq.push(abs(a-b));
        }
        return (pq.size() == 0) ? 0 : pq.top();
    }
};
