#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
  map<int, int> m1;
  m1[1] = 10;
  m1[2] = 20;
  m1[3] = 30;

  for (auto e : m1)
    cout << e.first << " " << e.second << endl;
  
  cout<<m1[2]<<endl;
  
  bool s = m1.find(20) == m1.end();
  cout<<s;
}