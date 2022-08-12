class Solution {
public:
    bool isAnagram(string s, string t) {
      if(s.size() != t.size()) return false;

      unordered_map<char, int> imaps;
      unordered_map<char, int> imapt;

      for(auto c : s){
        if(imaps.find(c) != imaps.end()){
          ++imaps[c];
        }
        else imaps[c] = 1;
      }
      
      for(auto c : t){
          if(imapt.find(c) != imapt.end()){
            ++imapt[c];
          }
          else imapt[c] = 1;
        }
      
      bool isAnagram = true;
      for(int i=0; i<s.size(); i++){
        if(imaps[s[i]] != imapt[s[i]]) {
          isAnagram = false;
          break;
        }
      }
      
      return isAnagram;
    }
};