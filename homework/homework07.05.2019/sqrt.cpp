#include <iostream>
using namespace std;
#define epsilion 0.0000001

double my_sqrt(double number)

{
    if (number == 0 || number == 1){
        return number;
    }
    double low = 0.0;
    double high = number / 2;
    do {
       low = high;
       high = (low + (number / low)) / 2;
       } while ((high - low) != 0);
    return high;
} 
int main ()
{
	double number1 = 0;
	cout << "Please enter a number: ";
	cin >> number1;
	if(number1 < 0){
		cout << "Innegative number cann't give sqrt";
	}
	else{
	 cout << "Root of number is: " <<  my_sqrt(number1) << endl;
	}

return 0;
}
