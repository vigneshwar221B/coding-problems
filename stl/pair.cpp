#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
  pair<int, int> p1 = {1, 2};
  cout << p1.first << " " << p1.second << endl;

  pair<int, pair<int, int>> p2 = {1, {2, 3}};
  cout << p2.second.first << " "<< p2.second.second << endl;

  pair<int, string> p3 = {1, "hi"};
  cout << p3.first << " " << p3.second << endl;

  pair<int, int> p4[] = {{1, 2}, {3, 4}};
  cout << p4[1].first << " " << p4[1].second;
}