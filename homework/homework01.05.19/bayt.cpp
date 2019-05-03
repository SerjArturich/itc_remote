#include <iostream>
using namespace std;
#define size 4
	void  BaytInt (int number){
		unsigned char buf[4];
		buf[0] = (number) >> 24;
                buf[1] = (number) >> 16;

                buf[2] = (number) >> 8;

                buf[3] = (number);
		for (int i = 0; i < size; ++i){
			int a = (int)buf[i];
			cout <<a << "  ";
		}

/*
		unsigned char numbers = (unsigned char)number;
//		unsigned char*ptr = &numbers;
		int i = 0;
			while(i < size){
			unsigned char*ptr = &numbers + i;

			int changenumber = (int) *ptr;
//			ptr -= 1;
			i++;
			cout << (void*) ptr <<  "  " << changenumber << "  ";
			}*/
			
	}
/*	void BaytFloat(float number){
                unsigned char buf[4];
                buf[0] = (number) >> 24;
                buf[1] = (number) >> 16;

                buf[2] = (number) >> 8;

                buf[3] = (number);
                for (int i = 0; i < size; ++i){
                        float a = (float)buf[i];
                        cout <<a << "  ";
                }
 	}*/
int main(){
	int number = 0;
	cout << "Integer number is a: ";
	cin >> number;
	BaytInt(number);
//	float number1;
//	cout << "Float number is a: ";
//	cin >> number1;
//	BaytFloat(number1);
	return 0;
	

}/*
#include <iostream>

using namespace std;

int
main()
{
    union {
        unsigned char a;
        struct byte
        {
            unsigned low:1;
            unsigned high:4;
        } b;
    } byte;
    byte.a = 125;
    cout << byte.b.high << " " << byte.b.low << endl;
    return 0;
}*/
