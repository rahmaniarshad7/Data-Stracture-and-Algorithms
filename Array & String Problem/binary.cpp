#include <iostream>
using namespace std;

int binarySearch(int arr[], int x, int low, int high) {
    while (low <= high) {
        int mid = (high + low) / 2;

        // If x is greater, ignore left half
        if (arr[mid] < x)
            low = mid + 1;

        // If x is smaller, ignore right half
        else if (arr[mid] > x)
            high = mid - 1;

        // means x is present at mid
        else
            return mid;
    }

    // If we reach here, then the element was not present
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x ;
    cout<<"enter element to search : ";
    cin>>x;

    int result = binarySearch(arr, x, 0, n - 1);

    if (result == -1)
        cout << "Element is not present in array";
    else
        cout << "Element is present at index " << result;
    return 0;
}
