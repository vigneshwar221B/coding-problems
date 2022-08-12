class Solution {
  unordered_map<int, int> cache;
public:
  int fib(int n) {
    if(n<2) return n;
    if(cache.find(n) != cache.end()) return cache[n];
    else cache[n] = fib(n-1) + fib(n-2);
    
    return cache[n];

  }
};