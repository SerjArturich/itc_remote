#include <iostream>
#include <string>
using namespace std;

int main (){
	string txt = "";
	cout << "Please enter the text. ";
	getline(cin, txt);
	short value = 0;
	int size = txt.length();
	int count = 0;
	for(int i = 0; i < size; ++i) {
		value = (short) txt[i];
		int j = i + 1;
		if(value > 64 && value < 91){
			while(txt[j] != '\0'){
				if(txt[j] == '.'){
					count++;
					break;
				}
				else {		
					j++;
				}
			}
			i = j;
		}

		
	}
	if(count != 0){
	cout <<  "Count of expression in the text is: " << count;
	}
	else{
	cout << "Count of expression in the text is 0.";
	}

return 0;

}
