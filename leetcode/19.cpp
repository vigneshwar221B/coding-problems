class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* prev = head;
        ListNode* node = head;
        ListNode* end = head;
        
        for(int i=1; i<=n-1; i++){
            end = end->next;
        }
        
        while(end->next != NULL){
            if(end->next->next == NULL){
                 node = node->next;
                 end = end->next;
                 break;
            }
            node = node->next;
            end = end->next;
            prev = prev->next;
        }
        
        if(head == end) return NULL;
        if(head == node) return head->next;
        
        cout<<node->val;
        cout<<prev->val;
        
        prev->next = node->next;
        delete node;
        
        return head;
    }
};
