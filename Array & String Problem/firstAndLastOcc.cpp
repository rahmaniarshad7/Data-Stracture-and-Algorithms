#include <iostream>
using namespace std;

int fistOcc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = -11;

    while (start <= end)
    {
        /* code */
        int mid = start + (end - start) / 2;
        if (key == arr[mid])
        {
            /* code */
            ans = mid;
            end = mid - 1;
        }
        else if (key < arr[mid])
        {
            /* code */
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            /* code */
            start = mid + 1;
        }
    }
    return ans;
}

int lastOcc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = -11;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        /* code */

        if (key == arr[mid])
        {
            /* code */
            ans = mid;
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            /* code */
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            /* code */
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int even[] = {1, 2, 2, 2, 2, 4, 5};
    int size = sizeof(even) / sizeof(even[0]);

    cout << "First occurence of 2 is at index  " << fistOcc(even, size, 2);
    cout << endl;
    cout << "last occurence of 2 is at index  " << lastOcc(even, size, 2);
}