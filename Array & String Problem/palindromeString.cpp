#include <iostream>
using namespace std;

string checkPalindrome(string str, int len)
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
  cout << "Enter String to check Palindrome... ";
  cin >> str;

  int len = str.length();
  string ans = checkPalindrome(str, len);

  if (ans == str)
  {
    cout << "String Is Palindrome ";
  }
  else
    cout << "String is Not palindrome ";
}