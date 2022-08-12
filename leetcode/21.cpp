class Solution {
public:
  ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* res = new ListNode();
    ListNode* ref = res;
    
    while(list1 && list2){
      if(list1->val<=list2->val){
        ListNode* temp = new ListNode(list1->val);
        ref->next = temp;
        list1 = list1->next;
      }else{
        ListNode* temp = new ListNode(list2->val);
        ref->next = temp;
        list2 = list2->next;
      }
      ref=ref->next;
    }
    
    while(list1) {
      ListNode* temp = new ListNode(list1->val);
      ref->next = temp;
      list1 = list1->next;
      ref=ref->next;
    }
    
    while(list2) {
      ListNode* temp = new ListNode(list2->val);
      ref->next = temp;
      list2 = list2->next;
      ref=ref->next;
    }
    
    return res->next;
  }
};