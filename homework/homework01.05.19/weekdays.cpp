#include <iostream> 
using namespace std;

int getWeekDay(int yy, int mm, int dd) 
{
	int rst =                                                     
		dd                                                      
		+ ((153 * (mm + 12 * ((14 - mm) / 12) - 3) + 2) / 5) 
		+ (365 * (yy + 4800 - ((14 - mm) / 12)))
		+ ((yy + 4800 - ((14 - mm) / 12)) / 4)
		- ((yy + 4800 - ((14 - mm) / 12)) / 100)
		+ ((yy + 4800 - ((14 - mm) / 12)) / 400)
		- 32045;

	return (rst+1)%7 ;
}

int main()
{
	const char *Names[] = {"Sunday","Monday", "Tuesday","Wednesday", "Thursday", "Friday", "Saturday"};
	int weekday = 0;
	int day = 0;
	int mount = 0;
	int year = 0;
	cout << "please enter  a day: ";
	cin >> day;
	cout << "please enter  a mount: ";
        cin >> mount;
	cout << "please enter  a year: ";
        cin >> year;

	weekday= getWeekDay(2017,6,24);
	cout<<"Day : "<<Names[weekday]<<endl;

	return 0;    
}
