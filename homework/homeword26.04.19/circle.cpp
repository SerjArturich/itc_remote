#include <iostream>
#include <cmath>
 
using namespace std;

int main () {
float x1 = 0;
float y1 = 0;
float x2 = 0;
float y2 = 0;
float x3 = 0;
float y3 = 0;
cout << "Pliase enter the points: ";
cout << "x1 = ";
cin >> x1;
cout << "y1 = ";
cin >> y1;
cout << "x2 = ";
cin >> x2;
cout << "y2 = ";
cin >> y2;
cout << "x3 = ";
cin >> x3;
cout << "y3 = ";
cin >> y3;
  
float a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
float b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
float c = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
float helfperimeter =  (a + b + c) / 2;
float radius = 0;

if(a + b > c && a + c > b && b + c > a){
radius = a * b * c / (4 * sqrt(helfperimeter * (helfperimeter - a) *
 (helfperimeter - b) * (helfperimeter - c) ));
float circleperimeter =  2 * M_PI * radius;
cout << "Circle perimeter is -> " << circleperimeter;
}

else {
cout << "There are no circles in these points !!! " << endl << " Please enter new points. ";
 }

return 0;
}

