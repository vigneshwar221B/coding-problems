class Solution {
public:
  bool isPalindrome(int x) {
    if(x<0) return false;
    
    long long int revNum = 0;
    int xTemp = x;
    
    while(x){
      int rem = x%10;
      x = x/10;
      revNum = revNum * 10 + rem;
    }
    return xTemp == revNum;
  }
};