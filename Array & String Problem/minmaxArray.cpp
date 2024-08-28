#include<iostream>
using namespace std;
int i;

int getMax(int arr[], int size)
{
    int ans = -1111111;
    for(i=0; i<size; i++)
    {
        if(arr[i] > ans)
        ans=arr[i];
    }
    cout<<"Maximum element in array is : "<<ans<<endl;
}
 
 void getMin(int arr[], int size)
 {
    int ans = 111111111;
    for(i=0; i<size; i++)
    {
        if(arr[i] < ans)
        ans=arr[i];
    }
    cout<<"minimum element in array is : "<<ans<<endl;
 }





int main()
{
    int n;
    cout<<"enter n : ";
    cin>>n;

    int arr[1000];
    cout<<"enter data in array : ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    getMax(arr, n);
    getMin(arr, n);
}