class Solution {
public:
    void reverseString(vector<char>& s, int i = 0) {
      
      int j = s.size()-i-1;
      if(i>j) return;
      //swap
      int temp = s[i];
      s[i] = s[j];
      s[j] = temp;
      
      reverseString(s, i+1);
    }
};