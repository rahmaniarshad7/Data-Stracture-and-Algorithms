#include <iostream>
using namespace std;

int firstocc(int arr[], int size, int key)
{
    int low = 0;
    int high = size - 1;
    int ans = -11;
    while (low <= high)
    {
        /* code */
        int mid = low + (high - low) / 2;
        if (key == arr[mid])
        {
            /* code */
            ans = mid;
            high = mid - 1;
        }
        else if (key > arr[mid])
        {
            /* code */
            low = mid + 1;
        }
        else if (key < arr[mid])
        {
            /* code */
            high = mid - 1;
        }
    }
    return ans;
}

int lastocc(int arr[], int size, int key)
{
}

int main()
{
    int arr[] = {2, 4, 10, 10, 10, 20};

    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << "enter element to find Occurance...";
    cin >> key;

    int result = firstocc(arr, size, key);
    cout << result;
    // cout << "last occurance of " << key << " is at index " << lastocc(arr, size, key);
}
