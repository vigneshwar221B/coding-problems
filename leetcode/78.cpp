class Solution
{
public:
  vector<vector<int>> subsets(vector<int> &nums)
  {
    vector<vector<int>> ans;
    findSubsets(nums, 0, {}, ans);
    return ans;
  }

  void findSubsets(vector<int> nums, int index, vector<int> subset, vector<vector<int>> &ans)
  {
    if (index >= nums.size())
    {
      ans.push_back(subset);
      return;
    }

    subset.push_back(nums[index]);
    findSubsets(nums, index + 1, size, subset, ans);
    subset.pop_back();
    
    findSubsets(nums, index + 1, size, subset, ans);
  }
};