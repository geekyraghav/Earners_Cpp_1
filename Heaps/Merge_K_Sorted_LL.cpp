class Solution {
public:
    typedef pair<int,ListNode*> pil;
    ListNode* mergeKLists(vector<ListNode*>& arr) { // Method 3 (Heap)
        if(arr.size() == 0) return NULL;
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;
        priority_queue<pil,vector<pil>,greater<pil>> heap; 
        for(ListNode* node : arr){
            if(node != NULL) heap.push({node->val,node});
        }
        while(heap.size() > 0){
            pil top = heap.top();
            int val = top.first;
            ListNode* node = top.second;
            heap.pop();
            if(node->next != NULL) heap.push({node->next->val,node->next});
            temp->next = node;
            temp = node;
        }
        return dummy->next;
    }
};
