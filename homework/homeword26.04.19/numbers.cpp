#include <iostream>
using namespace std;

int main() {


int* numbers = new int[10];
int sizearray = 0;
int number = 0;
int balance = 0;

cout << "Please enter a number";
cin >> number;

while(number > 0){
balance = number % 10;
number /= 10;
if(balance != 0){
numbers[sizearray] = balance;
sizearray ++;
}
}
cout << "Will be a reversed number:  ";

for (int i = 0; i < sizearray; ++i){
cout << numbers[i];
}
return 0;
}
     
