#include <iostream>
#include <vector>
using namespace std;

int longestPalindrome(string s)
{
  vector<int> lower(26, 0);
  vector<int> upper(26, 0);
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] >= 'a')
    {
      lower[s[i] - 'a']++;
    }
    else
    {
      upper[s[i] - 'A']++;
    }
  }
  int count = 0;
  bool odd = 0;
  for (int i = 0; i < 26; i++)
  {
    if (lower[i] % 2 == 0)
    {
      count += lower[i];
    }
    else
    {
      count += lower[i] - 1;
      odd = 1;
    }
  }
  int uppercount = 0;
  bool odd1 = 0;
  for (int i = 0; i < 26; i++)
  {
    if (upper[i] % 2 == 0)
    {
      uppercount += upper[i];
    }
    else if (upper[i] == 1)
    {
      odd1 = 1;
    }

    else
    {
      uppercount += upper[i] - 1;
      odd1 = 1;
    }
  }
  return count + uppercount + odd1;
}

int main()
{
  string s = "abccccdd";
  int ans = longestPalindrome(s);
  cout << ans;
}