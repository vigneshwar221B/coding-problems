// brute force approach o(n^2)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {    
        int n = nums.size();
        int ans = INT_MIN;
        for (int i = 0; i<n; i++){
            int sum = 0;
            for (int j = i+1; j<n; j++){
                sum += nums[j];
                ans = max(sum, ans);
            }
        }  
        return ans;
    }
};

// kadane
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN;
        int n = nums.size();
        
        int sum = 0;
        for(int i=0; i<n ; i++){
            
            if(nums[i] > sum + nums[i]) sum = nums[i];
            else sum += nums[i];
            
            if(ans < sum) ans = sum;
        }
        
        return ans;
    }
};

//kadane with clean code

class Solution {
public:
    int maxSubArray(vector<int>& nums) {  
        int ans = INT_MIN;
        int sum = 0;
        
        for(auto n: nums){
            sum = max(n, sum + n);
            ans =  max(ans, sum);
        }
        
        return ans;
    }
};