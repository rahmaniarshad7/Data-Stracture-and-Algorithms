#include <iostream>
using namespace std;
int findSecondLargest(int arr[], int n)
{
    int largest = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    int secondLargest = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] > secondLargest && arr[j] != largest)
        {
            secondLargest = arr[j];
        }
    }
    return secondLargest;
}

int main()
{
    int arr[5] = {1, 4, 3, 2, 5};

    int secondLargest = findSecondLargest(arr, 5);

    cout << "The second largest element in the array is " << secondLargest << endl;

    return 0;
}