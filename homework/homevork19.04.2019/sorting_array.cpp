
/*Արդեն սորտավորված զանվածից գտնել թվի համարը,
 եթե 1֊ից ավել է տպել թե քանի անգամա կրկնվում
*/



#include <iostream>
#include <algorithm>
using namespace std;
int* buble_sort(int array[], int size)
{
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(array[j] > array[j+1]){
		swap(array[j], array[j + 1]);
            }
        }
    }
    return array;
}


int main()
{
    int a;
    int size = 0;
    cout << "Please enter a size of array: ";
    cin >> size;
    int array [size];
    cout << "Please enter elements of array: ";

    for(int i = 0; i < size; ++i){
        cin >> array[i];
    }

    int* sortarray = buble_sort(array, size);
for(int i = 0; i < size; ++i){
        cout << sortarray[i] << "  ";
    }
    cout << endl;
    int number = 0;
    int count = 0;
    cout << "Plaese enter  a number:";
    cin >> number;
    for(int i = 0; i < size; ++i){
        if (number == sortarray[i]){
            count ++;
            cout << "array[" << i << "] = " << number << endl;
        }
    }	 
    if(count == 0)
	{
            cout << "There is no number of given data in the array" << endl;
	}
    else
	{  
	    cout<<"Count of number is:" << count << endl;
	}
    return 0;
}
