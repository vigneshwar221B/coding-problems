#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
  set<int> st;
  st.insert(1);
  st.insert(10);
  st.insert(5);
  st.insert(8);
  st.insert(8);

  st.erase(st.find(5), st.find(10));
}