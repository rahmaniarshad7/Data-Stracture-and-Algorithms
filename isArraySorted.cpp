#include <iostream>
using namespace std;

int isArraySorted(int arr[], int size)
{
  for (int i = 1; i < size; i++)
  {
    if (arr[i] >= arr[i - 1])
    {
      continue;
    }
    else
    {
      return 0; // Array is not sorted. Return 0.
    }
  }
  return 1;
}

int main()
{
  int size;
  cout << "Enter the size of the array: ";
  cin >> size;

  int arr[size];
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  int ans = isArraySorted(arr, size);
  if (ans == 0)
  {
    cout << "Array is not sorted " << endl;
  }
  else
  {
    cout << "Array is sorted " << endl;
  }
  return 0;
}