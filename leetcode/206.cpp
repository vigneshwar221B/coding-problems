class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
      if(head == NULL || head->next == NULL){
        return head;
      }
      
      // a->b->c->d
      auto head = reverseList(head->next);
      ListNode* temp = head->next;
      
      head->next = temp->next;
      temp->next = head;
        
      return head;
    }
};