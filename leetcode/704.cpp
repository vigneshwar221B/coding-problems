class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        return solve(nums, low, high, target);
    }
    
    int solve(vector<int>& nums, int low, int high, int target) {
        if(low > high) return -1;
        int mid = (low + high) / 2;
        
        if(target > nums[mid]) return solve(nums, mid + 1, high, target);
        if(target < nums[mid]) return solve(nums, low, mid - 1, target);
        
        return mid;
    }
};