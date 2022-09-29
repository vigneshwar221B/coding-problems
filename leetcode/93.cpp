class Solution
{
public:
  vector<string> restoreIpAddresses(string s)
  {
    vector<string> ips;
    backtrack(s, 0, 0, "", ips);
    return ips;
  }

  void backtrack(string s, int dots, int i, string ip, vector<string> &ips)
  {
    if (dots > 4 || i > s.size())
      return;

    if (dots == 4 && i == s.size())
    {
      ips.push_back(ip.substr(0, ip.size() - 1));
      return;
    }

    if (s[i] == '0')
    {
      backtrack(s, dots + 1, i + 1, ip + s.substr(i, 1) + ".", ips);
      return;
    }

    for (int j = 0; j < 3 && i + j < s.size(); j++)
    {
      if (stoi(s.substr(i, j + 1)) < 256)
        backtrack(s, dots + 1, i + j + 1, ip + s.substr(i, j + 1) + ".", ips);
    }
  }
};