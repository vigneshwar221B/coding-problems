class Solution {
  unordered_map<int, int> cache;
public:
    int climbStairs(int n) {
      if(n<=2) return n;
      if(cache.find(n) != cache.end()) return cache[n];
      else cache[n] = climbStairs(n-1) + climbStairs(n-2);

      return cache[n];
    }
};