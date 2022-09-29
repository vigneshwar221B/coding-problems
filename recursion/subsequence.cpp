#include <iostream>
#include <vector>

using namespace std;

void subsequence(vector<int> arr, int index, vector<int> &output, int s, int sum)
{
  if (index == arr.size())
  {
    if (s == sum)
    {
      for (auto it : output)
        cout << it << " ";
      cout << "\n";
    }
    return;
  }

  output.push_back(arr[index]);
  //s+=arr[index];
  subsequence(arr, index + 1, output, s + arr[index], sum);
  output.pop_back();
  //s-=arr[index];
  subsequence(arr, index + 1, output, s, sum);
}

int main()
{
  vector<int> arr{1, 2, 1};
  vector<int> output;

  subsequence(arr, 0, output, 0, 2);
}