#include <iostream>
using namespace std;

int reverseSearch(int arr[], int size, int key)
{
    int low = 0;
    int high = size - 1;
    // find element in sorted array
    while (low <= high)
    {
        /* code */
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
        {
            /* code */
            return mid;
        }
        else if (arr[mid] > key)
        {
            /* code */
            low = mid + 1;
        }
        else if (arr[mid] < key)
        {
            /* code */
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {16, 14, 12, 10, 8, 6, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << "Enter element to search..";
    cin >> key;

    int result = reverseSearch(arr, size, key);
    if (result == -1)
    {
        /* code */
        cout << "Element not found...";
    }
    else
    {
        cout << "Element found at index  " << result;
    }
}