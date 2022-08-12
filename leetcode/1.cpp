// brute force

class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    for (int i = 0; i < nums.size(); i++)
    {
      int diff = target - nums[i];
      for (int j = i + 1; j < nums.size(); j++)
      {
        if (diff == nums[j])
          return {i, j};
      }
    }
    return {-1, -1};
  }
};

// hashmaps

class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    unordered_map<int, int> imap;
    // setting up hashmap
    for (int i = 0; i < nums.size(); i++)
    {
      if (imap.find(nums[i]) == imap.end())
      {
        imap[nums[i]] = i;
      }
    }
    // solve
    for (int i = 0; i < nums.size(); i++)
    {
      // imap[target - nums[i]] != i to avoid duplicates
      if (imap.find(target - nums[i]) != imap.end() && imap[target - nums[i]] != i)
      {
        return {i, imap[target - nums[i]]};
      }
    }

    return {-1, -1};
  }
};