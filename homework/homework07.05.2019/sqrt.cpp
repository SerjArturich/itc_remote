#include <iostream>
using namespace std;
#define epsilion 0.0000001
void my_sqrt(int number){
	int low = 0;
	int high = number;
	int root =(low + high) / 2;
	if (number > 0){
	while ( high - low > 1){
		if (root * root <= number){
			low = root;
		}
		else{
			high = root;
		
		}
		root = (low + high) / 2;
	}
	
	cout << "Root of number is: " <<  root;
	}
	else{
		cout << "In negative number cann't give sqrt";
	}
}

void my_sqrt(double number){
	if(number >= 1){
        double low = 0;
        double high = number;
        double root = 0;
        while ( high - low > epsilion){
		root = high - (high - low) / 2;
                if (root * root > number){
                        high = root;
                }
		else{
			low = root;
		}
	}
	cout << "Root of number is: " << root;	
	}
	else if(number < 0){
		 cout << "In negative number cann't give sqrt";
	}
	else{} 
}
int main ()
{
	int number;
	cout << "Please enter a number: ";
	cin >> number;
	my_sqrt(number);
	cout << endl;
	double number1;
	cout << "Please enter a number: ";
	cin >> number1;
	 my_sqrt(number1);

return 0;
}
