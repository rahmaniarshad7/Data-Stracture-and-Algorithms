#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {2, 3, 5, 10, 50, 80};
    int target = 45;

    int start = 0;
    int end = start + 1; // end is set to the next index of start
    while (end < 6)
    {
        if (arr[end] - arr[start] == target)
        {
            cout << arr[start] << end;
            cout << arr[end];
        }
        else if (arr[end] - arr[start] < target)
        {
            end++;
        }
        else
            start++;
    }
}