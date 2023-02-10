#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
  void solve(vector<int> &candidates, int target, vector<vector<int>> &result, vector<int> temp = {}, int i = 0)
  {
    if (target < 0 || i >= candidates.size())
      return;
    if (target == 0)
    {
      result.push_back(temp);
      return;
    }

    if (candidates[i] <= target)
    {
      temp.push_back(candidates[i]);
      solve(candidates, target - candidates[i], result, temp, i);
      temp.pop_back();
    }
    solve(candidates, target, result, temp, i + 1);
  }

public:
  vector<vector<int>> combinationSum(vector<int> &candidates, int target)
  {
    vector<vector<int>> result = {};
    solve(candidates, target, result);
    return result;
  }
};

int main()
{
}

