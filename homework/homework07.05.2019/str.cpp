#include <iostream>
#include <string.h>
#include <algorithm>

int fact(int n){

if(n == 0 || n == 1){
	return 1;
}
else{
	return n * fact(n - 1);
}
}


using namespace std;

int main () {
	string str = "";
	cout << "Please enter string: ";
	getline(cin, str);
	int size = str.length();
	int loop = fact(size) / 2;
	int count = 0;
//	int i = 0;
	int j = 0;
cout << loop <<endl;
cout << count;
	for(int i = 0;  i < loop; ++i){
		if(j > size - 2){
			j = 0;
		}
		cout << str << endl;
		swap(str[j], str[j + 1]);
		j++;
	}
	reverse(str.begin(), str.end());
	j = 0;
        for(int i = 0; i < loop; ++i ){
                if(j > size - 2){
                        j = 0;
                }
                cout << str << endl;
                swap(str[j], str[j + 1]);
                j++;
        }
return 0;	
}
