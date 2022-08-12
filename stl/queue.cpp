#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
  queue<int> q;
  q.push(1);
  q.push(2);
  q.push(3);

  cout << q.front();
  cout << q.back();
  q.pop();
  cout << q.front();
  cout << q.back();
  cout<< endl;

  priority_queue<int> pq;

  pq.push(1);
  pq.push(10);
  pq.push(5);

  cout << pq.top();
  pq.pop();
  cout << pq.top();

  //min heap
  //priority_queue<int, vector<int>, greater<int>> mh;
}