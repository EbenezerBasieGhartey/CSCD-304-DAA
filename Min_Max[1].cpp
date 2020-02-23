#include <iostream>
using namespace std;

void Min_Max(int arr[], int low, int high, int& min, int& max)
{
	if (low == high)			
	{
		if (max < arr[low])	 
			max = arr[low];

		if (min > arr[high])	
			min = arr[high];

		return;
	}

	if (high - low == 1)			
	{
		if (arr[low] < arr[high])	
		{
			if (min > arr[low])	 
				min = arr[low];

			if (max < arr[high])	
				max = arr[high];
		}
		else
		{
			if (min > arr[high])	
				min = arr[high];

			if (max < arr[low])	 
				max = arr[low];
		}
		return;
	}

	int mid = (low + high) / 2;
	Min_Max(arr, low, mid, min, max);
	Min_Max(arr, mid + 1, high, min, max);
}

int main()
{
	int arr[15];
	int size = sizeof(arr) / sizeof(arr[0]);
	
	cout << "Enter the size(15 Maximum) of the array : "<<endl;
    cin >> size;
    cout << "Enter the elements of the array : "<<endl;
    for (int i = 0; i < size; i++)
        cin >> arr[i];

	int max = INT_MIN, min = INT_MAX;

	Min_Max(arr, 0, size - 1, min, max);

	for(int j=0; j<size; j++){
		if(arr[j]==max){
			cout<<"max value = "<<max<<"  found at index : " <<j <<endl;
		}	
		else if (arr[j]==min)
		cout<<"min value = "<<min<<"  found at index : "<<j <<endl;	
	}
	return 0;
}
