// Heap Sort
#include <iostream>
#include<algorithm>
using namespace std;
void heapify(int arr[], int n, int i) 
{ 
	int largest = i;  
	int l = 2*i ; 
	int r = 2*i + 1; 
	if (l < n && arr[l] > arr[largest]) 
		largest = l; 
		
	if (r < n && arr[r] > arr[largest]) 
		largest = r; 

	if (largest != i) 
	{ 
		swap(arr[i], arr[largest]); 
		heapify(arr, n, largest); 
	} 
} 

void heapSort(int arr[], int n) 
{ 

	for (int i = n / 2 ; i >= 1; i--) 
		heapify(arr, n, i); 


	for (int i=n-1; i>=1; i--) 
	{ 

		swap(arr[1], arr[i]); 

		 
		heapify(arr, i, 1); 
	} 
} 

int main()
{
	int arr[] = {12,32,24,65}; 
	int n = sizeof(arr)/sizeof(arr[0]); 

	heapSort(arr, n);
    
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    
}
