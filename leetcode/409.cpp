class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> map;
        
        for(auto c: s) map[c]++;
        
        int result = 0;
        bool is_odd = false;
        for (auto el: map){
            if(el.second % 2 == 0) result += el.second;
            else{
                result += el.second - 1;
                is_odd = true;
            }
        }
        
        return is_odd ? result+1: result;
    }
};