#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
  bool isPathCrossing(string path)
  {
    int x = 0, y = 0;
    set<pair<int, int>> visited;

    bool crossed = false;
    for (char c : path)
    {
      visited.insert(pair<int, int>{x, y});
      if (c == 'N')
        y += 1;
      if (c == 'S')
        y -= 1;
      if (c == 'E')
        x += 1;
      if (c == 'W')
        x -= 1;

      if (visited.find(pair<int, int>{x, y}) != visited.end())
      {

        crossed = true;
        break;
      }
    }

    return crossed;
  }
};