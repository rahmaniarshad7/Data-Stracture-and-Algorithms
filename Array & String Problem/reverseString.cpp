#include <iostream>
using namespace std;

string reverseString(string str, int len)
{
  string ans = "";
  for (int i = len - 1; i >= 0; i--)
  {
    ans = ans + str[i];
  }
  return ans;
}

int main()
{
  string str;
  cout << "Enter String to reverse... ";
  getline(cin, str);

  int len = str.length();

  string ans = reverseString(str, len);
  cout << ans;
}