#include<iostream>
using namespace std;

int main()
{
	int arr [5] = {5,20,12,20,10};
	
	int largest = 0;
	for(int i=0; i<5; i++)
	{
		if(arr[i] > largest)
		{
			largest = arr[i];
		}
	}
	int slar=-1;
	for(int j=0; j<5; j++)
	{
		if(arr[j] > slar && arr[j] != largest)
		{
			slar = arr[j];
		}
	}
	cout<<largest<<endl;
	cout<<slar;
}
