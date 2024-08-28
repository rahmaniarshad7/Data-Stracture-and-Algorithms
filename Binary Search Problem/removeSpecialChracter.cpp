#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string removeString(string str, int len)
{
  string ans = "";
  for (int i = 0; i < len; i++)
  {
    string temp = "";
    for (int i = 0; i < len; i++)
    {
      if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
      {
        temp = temp + str[i];
      }
    }
    return temp;
  }
}

int main()
{
  string str;
  cout << "Enter String : ";
  cin >> str;

  int len = str.length();

  string result = removeString(str, len);
  cout << result;
}