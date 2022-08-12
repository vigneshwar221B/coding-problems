class Solution {
public:
  ListNode* middleNode(ListNode* head) {
    ListNode* temp = head;
    
    int length = 0;
    while(temp){
      length+=1;
      temp = temp->next;
    }
    
    int middle = length/2;
    
    ListNode* ans = head;
    for(int i=0; i<middle; i++){
      ans = ans->next;
    }
    
    return ans;
  }
};