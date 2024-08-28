#include <iostream>
using namespace std;

int peakElement(int arr[], int size)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        /* code */
        int mid = low + (high - low) / 2;
        if (mid > 0 && mid < size - 1)
        {
            if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
            {
                /* code */
                return mid;
            }
            else if (arr[mid - 1] > arr[mid])
            {
                /* code */
                high = mid - 1;
            }
            else if (arr[mid + 1] > arr[mid])
            {
                /* code */
                low = mid + 1;
            }
        }
        else if (mid == 0)
        {
            /* code */
            if (arr[0] > arr[1])
            {
                return 0;
            }
            else
                return 1;
        }
        else if (mid == size - 1)

        {
            /* code */
            if (arr[size - 1] > arr[size - 2])
            {
                return size - 1;
            }
            else
                return size - 2;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = peakElement(arr, size);
    cout << "Peak element in array " << arr[result];
}