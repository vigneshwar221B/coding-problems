class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int, vector<int>, greater<int>> pq;
        
        for(auto list: lists){
            while(list){
                pq.push(list->val);
                list = list->next;
            }
        }
        
        ListNode* head = new ListNode(0);
        ListNode* ref = head;
        while(!pq.empty()){
            ListNode* temp = new ListNode(pq.top());
            ref->next = temp;
            ref = ref->next;
            //cout<<pq.top();
            pq.pop();
        }
        
        return head->next;
    }
};