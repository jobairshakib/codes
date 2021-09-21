#include <bits/stdc++.h>
using namespace std;
// Swap two elements - Utility function  
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
   
// partition the array using last element as pivot
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];    // pivot 
    int i = (low - 1);   

    for (int j = low; j <= high- 1; j++) 
    { 
        //if current element is smaller than pivot, increment the low element
        //swap elements at i and j
        if (arr[j] <= pivot) 
        { 
            i++;    // increment index of smaller element 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
   
//quicksort algorithm
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        //partition the array 
        int pivot = partition(arr, low, high); 
   
        //sort the sub arrays independently 
        quickSort(arr, low, pivot - 1); 
        quickSort(arr, pivot + 1, high); 
    } 
} 
   
void displayArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout<<arr[i]<<"\t"; 
      
} 
   
int main() 
{ 
 clock_t start, end;
	int sz,duration;
   cout<<"Enter the size of array::";
   cin>>sz;
   start = clock(); 
   int arr[sz];
   for(int i=0;i<sz;i++)
      arr[i]=rand()%100; 
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	cout << "Given array is \n";
	displayArray(arr, arr_size);

    // start = clock();
	quickSort(arr, 0, arr_size - 1);
    // end = clock();
	cout << "\nSorted array is \n";
	displayArray(arr, arr_size);
    end = clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "\nTime taken by program is : " << fixed 
         << time_taken << setprecision(5);
    cout << " sec " << endl;
	return 0;
}