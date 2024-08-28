#include<iostream>
using namespace std;
int i;

void reverseArray(int arr[], int n)
{
    int start=0;
    int end=n-1;
    while(start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
}
void printArray(int arr[], int n)
{
    i=0;
    while(i<n)
    {
        cout<<arr[i]<<"  ";
        i++;
    }
}


int main()
{
  int n;
  cout<<"enter size of array : ";
  cin>>n;

  int arr[1000];
  cout<<"enter elements in array : ";
  for(i=0; i<n; i++)
  {
    cin>>arr[i];
  }
  reverseArray(arr, n);
  printArray(arr,n);
  
}