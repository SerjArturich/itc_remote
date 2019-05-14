#include <iostream>
using namespace std;

void enterArray(int arr[], int size)
{
    for (int i=0; i < size; i++)
       cin >> arr[i]; 
}

void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
 
int partitionSmallBig (int arr[], int low, int high) 
{
    int pivot = arr[high];     
    int i = (low - 1);  
  
    for (int j = low; j <= high - 1; j++) 
    { 
        if (arr[j] <= pivot) 
        { 
            i++;    
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
}

int partitionBigSmall (int arr[], int low, int high)
{
    int pivot = arr[high]; 
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] >= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
 
void quickSort (int arr[], int low, int high, bool yesorno ) 
{ 
    if (low < high) 
    { 
	int mediumarray = 0;
	if(yesorno == true)
	{	
	     mediumarray = partitionBigSmall(arr, low, high); 	
  	}
	else	
	{
	    mediumarray = partitionSmallBig(arr, low, high);

	}
        quickSort(arr, low, mediumarray - 1, yesorno); 
        quickSort(arr, mediumarray + 1, high, yesorno); 
    } 
} 
void printArray(int arr[], int size) 
{ 
    for (int i=0; i < size; i++) 
       cout << arr[i] <<"\t"; ; 
} 
int main() 
{  
    int size = 0;
    cout << "Please enter size of array: ";
    cin >> size;
    int arr[] = {};
    enterArray(arr, size);  
    bool yesorno = 0;
    cout << "Sort small -> big press click 0 else click 1" ;
    cin >> yesorno;
    quickSort(arr, 0, size - 1, yesorno); 
    printArray(arr, size); 
    return 0; 
} 
