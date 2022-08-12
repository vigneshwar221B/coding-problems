#include <iostream>
#include<vector>

using namespace std;

void print_subs(int ind, vector<int> &ds, int arr[], int n){
  if (ind == n){
    for(auto it: ds){
      cout<< it << " ";
    }
    cout<<"\n";
    return;
  }

  ds.push_back(arr[ind]);
  print_subs(ind+1, ds, arr, n);
  ds.pop_back();
  print_subs(ind+1, ds, arr, n);
}

int main()
{
  int arr[] = {3, 1, 2};
  int n = 3;
  vector<int> ds;
  print_subs(0, ds, arr, n);
}