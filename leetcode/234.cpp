class Solution {
public:
  bool isPalindrome(ListNode* head) {
    return solve(head, head);
  }
  
  bool solve(ListNode*& p, ListNode* q){
    if(!q) return true; 
    
    bool isPal = solve(p, q->next) && p->val == q->val;
  
    p = p->next;
    return isPal;
  }
};