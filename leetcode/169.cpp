class Solution {
public:
  int majorityElement(vector<int>& nums) {
    unordered_map<int, int> counter;
    for (int num : nums) {
        if(counter.find(num)==counter.end()) counter[num] = 0;
        if (++counter[num] > nums.size() / 2) {
            return num;
        }
    }
    return 0;
  }
};