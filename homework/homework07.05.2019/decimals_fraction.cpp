#include <iostream>
#include <cmath>
using namespace std;

int bigDivisible (int number_1, int number_2){
        while( number_1 != number_2){
                if(number_1 > number_2){
                         number_1 -=number_2;
                }
                else{
                        number_2 -= number_1;
                }
        }
	return number_1;

}

void decimalsFranction(long double number){
        int denominator = 1;
	int newnumber = (int)number;
	long double numberFloatPart = number - newnumber;
        while (numberFloatPart != 0.0) {
                number *= 10;
                denominator *= 10;
        newnumber = (int)number;
        numberFloatPart = number - newnumber;
        }

        int numerator = number;
	int div = bigDivisible(numerator, denominator);
        if(div == 1){
                cout << numerator << " / " << denominator;
        }
        else{
                cout << numerator / div << " / " << denominator / div;
        }
}


int main (){
	long double num = 0;
	cout << "Please enter a double number: ";
	cin >> num;
	if (num < 0 ){
		num /= -1;
		cout << "-";
		decimalsFranction(num);
	}
	else{
		decimalsFranction(num);
	}
	return 0;
}
