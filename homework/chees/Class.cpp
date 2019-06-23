#include <iostream>
#include <cmath>
#include <sstream>
#define M_KUB  1.33333 
using namespace std;

class Circle
{
	private:
		int x1;
		int y1;
		int x2;
		int y2;
		friend double Dimension(Circle & object);
		friend ostream& operator<<(ostream& stream, Circle& other);
		friend istream& operator>>(istream& stream, Circle& other);
	public:
		double Perimetr();
		double Area();
		double Radius();
		Circle();
		Circle (int x1, int x2, int y1, int y2);
		Circle (const Circle &other);
		~Circle ()
		{
			cout << "Working destruktor " << endl;
		}
		bool operator == (Circle other)
		{
			return this->Area() == other.Area();
		}
		bool operator != (Circle other)
		{
			return Area() != other.Area();
		}
		bool operator > (Circle other)
		{
			return Area() > other.Area();
		}
		bool operator < (Circle other)
		{
			return Area() < other.Area();
		}
		double operator + (Circle other)
		{
			return Area() + other.Area();
		}
		double operator - (Circle other)
		{
			return Area() - other.Area();
		}

};

double Dimension(Circle & object)
{
	double radius = sqrt((object.x2 - object.x1) * (object.x2 - object.x1) + 
			(object.y2 - object.y1) * (object.y2 - object.y1));
	double dimension = M_KUB * M_PI * radius * radius * radius;
	return dimension;	
}

ostream& operator<<(ostream& stream, Circle& other)
{
	stream << "Circle radius = " << other.Radius () << endl
		<< "Circle perimetr = " << other.Perimetr () << endl
		<< "Circle area = " << other.Area () << endl;
	return stream;
}

istream& operator>>(istream& stream, Circle& other)
{
	// stream << "x1 = ";
	stream >> other.x1 >>  other.y1 >>  other.x2 >>  other.y2;
	return stream;
}


Circle :: Circle()
{
	this->x1 = 1;
	this->y1 = 1;
	this->x2 = 3;
	this->y2 = 3;
	cout << "Defolt construktor" << endl;
}

Circle :: Circle(int x1, int y1, int x2, int y2)
{
	this->x1 = x1;
	this->y1 = y1;
	this->x2 = x2;
	this->y2 = y2;
	cout << "construktor" << endl;
}
Circle :: Circle(const Circle &other)
{
	this->x1 = other.x1;
	this->y1 = other.y1;
	this->x2 = other.x2;
	this->y2 = other.y2;
	cout << "Copy construktor";	
}

double Circle :: Perimetr()
{
	double radius = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	double perimetr = 2 * radius * M_PI;
	return perimetr;
}

double Circle :: Area ()
{
	double radius = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	double area = radius * radius * M_PI;
	return area;
}

double Circle :: Radius()
{
	double radius = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	return radius;
}	

int main()
{

	Circle circle1;
	cout << circle1 << endl;

	Circle circle2(0,0,10,10);
	cout << circle2 << endl;

	Circle circle3(5,5,10,10);
	cout << circle3 << endl;

	Circle circle4(5,5,15,15);
	cout << circle4 << endl;

	bool equal = circle2 == circle3;
	cout << "equal = " << equal << endl;

	bool noequal = circle2 != circle3;
	cout << "noequal =  " << noequal << endl;

	bool big = circle2 > circle3;
	cout << "Big = " << big << endl;

	bool small = circle2 < circle3;
	cout << "Small = " << small << endl; 

	double sum = circle2 + circle3;
	cout << "Sum = " << sum << endl;

	double diff = circle2 - circle3;
	cout << "Diff = " << diff << endl << endl << endl;

	cout << "Cordinats " << endl;
	cin >> circle2;
	cout << circle2 <<endl;
	cout << "Dimension in circle2 = " <<  Dimension(circle2) << endl;

	return 0;
}

