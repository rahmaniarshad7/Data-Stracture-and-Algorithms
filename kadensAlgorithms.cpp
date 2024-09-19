#include <iostream>
using namespace std;

int maxSubArray(int arr[], int size)
{
  int sum = 0;
  int maxValue = arr[0];
  for (int i = 1; i < size; i++)
  {
    sum = sum + arr[i];
    maxValue = max(maxValue, sum);
    if (sum < 0)
    {
      sum = 0;
    }
  }
  return maxValue;
}

int main()
{
  int size;
  cout << "Enter Size : ";
  cin >> size;

  int arr[size];
  cout << "Enter elements in Array : ";
  for (int i = 0; i < size; i++)
    cin >> arr[i];

  int maxSum = maxSubArray(arr, size);
  cout << maxSum;
}