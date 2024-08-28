#include<iostream>
using namespace std;

int i,j; 

int main()
{
    int n;
    cout<<"enter row : ";
    cin>>n;

    int m;
    cout<<"enter col : ";
    cin>>m;

int arr[n][m];
cout<<"enter elements in array : ";
for(i=0; i<n; i++)
{
    for(j=0; j<m; j++)
    cin>>arr[i][j];
}
int x;
cout<<"enter elements to search : ";
cin>>x;

for(i=0; i<n; i++)
{
    for(j=0; j<m; j++)
    {
        if(arr[i][j]==x)
        cout<<"got";
        
           else 
cout<<"not found";
    }
 
}

}