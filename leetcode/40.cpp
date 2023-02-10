#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
  void solve(
      vector<int> &candidates, int target, vector<vector<int>> &result, vector<int> temp = {}, int i = 0)
  {
    if (target == 0)
    {
      result.push_back(temp);
      return;
    }

    if (target < 0 || i >= candidates.size())
      return;

    temp.push_back(candidates[i]);
    solve(candidates, target - candidates[i], result, temp, i + 1);
    temp.pop_back();

    i++;
    while (i < candidates.size() && candidates[i - 1] == candidates[i])
    {
      i++;
    }

    solve(candidates, target, result, temp, i);
  }

public:
  vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
  {
    vector<vector<int>> result = {};
    sort(candidates.begin(), candidates.end());

    solve(candidates, target, result);

    return result;
  }
};