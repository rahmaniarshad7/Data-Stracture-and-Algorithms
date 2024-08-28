// binary search program

#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int low, int high, int key)
{
    int mid = low + (high - low) / 2;
    while (low <= high)
    {
        /* code */

        if (key == arr[mid])
        {
            /* code */
            // bhaiya retunn kar do
            return mid;
        }
        else if (key < arr[mid])
        {
            /* code */
            // bhaiya left side dekh lo;
            high = mid - 1;
        }
        else if (key > arr[mid])
        {
            /* code */
            low = mid + 1;
        }
        mid = low + (high - low) / 2;
    }
    return -1;
}

int main()
{
    int even[] = {2, 4, 6, 8, 10, 12, 14};

    int size = sizeof(even) / sizeof(even[0]);

    int key;
    cout << "Enter key to search ";
    cin >> key;

    int result;
    result = binarySearch(even, size, 0, size - 1, key);
    if (result == -1)
    {
        /* code */
        cout << "Element not found ";
    }
    else
        cout << "Element is found at index " << result;
}