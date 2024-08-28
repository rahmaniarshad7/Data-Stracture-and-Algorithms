#include<iostream>
using namespace std;

int binarySearch(int even[] , int size , int element)
{
	int low = 0;
	int high = size-1;
	int mid = (high + low) / 2;
	
	while(low <= high)
	{
		
		if(even[element] == even[mid])
		{
			return mid;
		}
		else if(even[element] > even[mid])
		{
			low = mid + 1;
		}
		else{
			high = mid -1;
		}
//		
        mid = (high + low) / 2;
	}
	return -1;
	
}

int main()
{
	int even[7]={2,4,6,8,10,12,14};
	
	int element;
	cout<<"Enter Element to Find ...";
	cin>>element;
	
	int index = binarySearch(even , 7 , element);
	cout<<"Element is Found at index "<<index;
}
