#include <iostream>
using namespace std;
bool compare(int num1, int num2)
{
    if(num1 - num2 < 0)
	{
	    return true;
	}
    else
	{
	    return false;
	}
}

void* enterArray(int arr[], int size)
{
    for (int i=0; i < size; i++)
       cin >> arr[i]; 
}

void* swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
 
int partitionSmallBig (int arr[], int low, int high, int num1, int num2) 
{
    int pivot = arr[high];     
    int i = (low - 1);  
    bool comp = compare(num1, num2);
    if(comp)
	{
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
	else
	    {
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
}

void quickSort (int arr[], int low, int high, int num1, int num2) 
{ 
    if (low < high) 
    { 
	int mediumarrayindex = partitionSmallBig(arr, low, high,num1, num2);
        quickSort(arr, low, mediumarrayindex - 1, num1, num2); 
        quickSort(arr, mediumarrayindex + 1, high, num1, num2); 
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
    int number1 = 0;
    int number2 = 0;
    cout << "Please enter size of array: ";
    cin >> size;
    int* arr = new int[size];
    cout << "Arays elements is: " << endl;
    enterArray(arr, size);  
    cout << "Enter 2 number" << endl;
    cout << "In order to sort by ascending order, enter a small number. In order to sort by descending order, enter a big number."
    <<endl;
    cin >> number1;
    cin >> number2;
    quickSort(arr, 0, size - 1,number1,number2 ); 
    printArray(arr, size);
    delete [] arr; 
    return 0; 
} 
