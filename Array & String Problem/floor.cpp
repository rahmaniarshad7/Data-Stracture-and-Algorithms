#include <iostream>
using namespace std;

int getFloor(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid;
    int ans;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (key < arr[0])
        {
            return -1;
            break;
        }
        if (arr[mid] == key)
        {
            return mid;
            break;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int size;
    cout << "Enter size of Array...";
    cin >> size;

    cout << "Enter elements in Array..." << endl;
    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter element to find floor..." << endl;
    cin >> key;

    int ans = getFloor(arr, size, key);
    if (ans == -1)
    {
        cout << "Not found";
    }
    else
        cout << "Floor of " << key << " is " << arr[ans];
}