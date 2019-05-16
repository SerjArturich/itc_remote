#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

vector<int> numberisstring(string str)
{
    int size = str.length();
    vector<int>numbers;
    for(int i = 0; i < size; ++i)
    {
        if((int) str[i] > 47 && (int) str[i] < 58)
        {
            int change = (int) str[i] - 48;
	    numbers.push_back(change);
        }

    }
    return numbers;
}

int main()

{
    string str;
    cout << "Please enter a string: ";
    getline(cin, str);
    int product = 1;
    vector<int> array = numberisstring(str);
    int sizevector = array.size();
    cout << "Size of numbers vector = " << sizevector << endl;
    for(int i = 0; i < sizevector; ++i)
    {
    product *= array[i];
    }
    if (sizevector != 0){
        cout << "Medium geometric is numbers in the string:";
    cout << pow( product, ( double) 1 / sizevector);
    }
    else {
         cout << "No numbers in the string.";
         
    }
    return 0;
}
