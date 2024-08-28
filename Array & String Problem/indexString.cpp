#include<iostream>
using namespace std;
int main()
{
  string address;
  cout<<"enter address : ";
  cin>>address;

string ans;
int index=0;
while(index < address.size())
{
    if(address[index] == '.')
    {
        ans=ans+"[.]";
       
    }

    else
    ans=ans+address[index];
    index++;

}
for(int i=0; i<ans.size(); i++)
{
    cout<<ans[i];
}

}