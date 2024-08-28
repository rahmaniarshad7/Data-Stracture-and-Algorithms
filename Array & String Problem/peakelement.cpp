/*
  finding peak element in array
  int s=0;
       int e=arr.size()-1;
       int mid = s+(e-s)/2;
       while(s < e)
       {
           if(arr[mid] < arr[mid+1])
           {
               s=mid+1;
           }
           else 
           {
               e=mid;
           }
           mid = s+(e-s)/2;
       }
       return s;
    }
*/
#include<iostream>
using namespace std;

int peakElement(int arr[] , int size)
{
	int low=0;
	int high=size-1;
	while(low <= high)
	{
		int mid = low + (high - low) / 2;
		if(mid > 0 && mid < size-1)
		{
			if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1])
			{
				return mid;
			}
			else if(arr[mid] < arr[mid -1])
			{
				high = mid -1;
			}
			else if(arr[mid] < arr[mid+1])
			{
				low = mid + 1;
			}
		}
		else if (mid == 0)
		{
			if(arr[0] > arr[1])
			return 0;
			else 
			return 1;
		}
		else if(mid == size-1)
		{
			if(arr[size-1] > arr[size-2])
			{
				return size-1;
			}
			else 
			return size-2;
		}
	}
}

int main()
{
	int arr []={1,2,3,4,5,6};
	int size = sizeof(arr) / sizeof(arr[0]);
	cout<<size;
	
	int result = peakElement(arr , size);
	cout<<"Peak element in array is ..."<<arr[result];
}
