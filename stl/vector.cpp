#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
  vector<int> v1 = {1, 2};
  v1.emplace_back(3);
  v1.push_back(4);

  for (auto e : v1)
    cout << e;
  cout << endl;

  vector<int> v2(v1);
  for (auto e : v2)
    cout << e;
  cout << endl;

  int arr[] = {1, 2, 3, 4};
  // vector<int> v3(arr, arr + sizeof arr / sizeof arr[0]);
  vector<int> v3(begin(arr), end(arr));

  for (auto e : v3)
    cout << e;
  cout << endl;

  vector<int> v4(5, 1);
  for (auto e : v4)
    cout << e;
  cout << endl;

  vector<int> v5 = {1, 2, 3, 4, 5};
  // cout<<*(v5.begin());
  // cout<<*(v5.rbegin());
  // cout<<*(--v5.end());
  // cout<<*(--v5.rend());

  v5.erase(v5.begin());
  v5.insert(v5.begin(), 1);

  v5.erase(v5.begin()+1, v5.begin()+3+1);
  v5.insert(v5.begin()+1, {2,3,4});
  for (auto e : v5)
    cout << e;
  cout << endl;

  //v5.erase() -> erases the vector
  //v5.empty() -> returns bool 
}