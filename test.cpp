#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
  vector<int> nums = {1,2,3,4};

  int n = nums.size();
    
    vector<int> prefix(n, 1);
    vector<int> suffix(n, 1);
    
    for(int i=1; i<nums.size(); i++){
      prefix[i] = prefix[i-1]*nums[i-1];
    }
    
    for(int i=nums.size()-2; i<=0; i--){
      cout<<i;
      suffix[i] = suffix[i+1]*nums[i+1];
    }
    // for (auto e : prefix)
    // cout << e << " ";
    // cout<<endl;

    // for (auto e : suffix)
    // cout << e << " ";
    // cout<<endl;
        
    vector<int> res;
    for(int i=0; i<nums.size(); i++) res.push_back(prefix[i]*suffix[i]);

  for (auto e : res)
    cout << e << " ";
}