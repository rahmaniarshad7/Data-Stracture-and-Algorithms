#include<iostream>
using namespace std;
int main()
{
	string str, temp;
	cout<<"enter string to check palindrome : ";
	getline(cin,str);
	
	temp=str;
	int start=0;
	int end=str.size()-1;
	
	// reversing the string
	while(start < end)
	{
		swap(str[start], str[end]);
		start++;
		end--;
	}
	
	//comparing reversed string to orgnanal string
	if(temp==str)
	{
		cout<<"string is palindrome "<<endl;
	}
	else
	cout<<"string is not palindrome : ";
}