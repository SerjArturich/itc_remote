#include <iostream>
using namespace std;

class Chees{
public:
		 
	Chees (int begini, int beginj, int endi, int endj){
		this->begini = begini;
		this->beginj = beginj;
		this->endi = endi;
		this->endj = endj;
	}
	Chees (){}
	
friend istream& operator>>(istream& stream, Chees& other);
	
	void King(){
		if(begini == endi && (endj == beginj - 1 || endj == beginj + 1) || 
           beginj == endj && (endi == begini - 1 || endi == begini + 1) ||
		   (endi == begini - 1) && (endj == beginj - 1 || endj == beginj + 1) ||
		   (endi == begini + 1) && (endj == beginj - 1 || endj == beginj + 1))
		{
			    cout << "King can go." << endl;
        }
        else
        {
            cout << "King can not go." << endl;
		}
	}
	void Queen(){
		if (endi == begini || endj == beginj || (begini + beginj) == (endi + endj) ||
           (begini - beginj) == (endi - endj))
		{
			cout << "Queen can go." << endl;
		}
		else
		{
			cout << "Queen can not go." << endl;
		}	

	}
	
	void Boat(){
		if(endi == begini || endj == beginj)
		{
    		cout << "Boat can go." << endl;
        }
        else
        {
            cout << "Boat can not go." << endl;
        }
	}

	void Elephant(){
		if((begini + beginj) == (endi + endj) || (begini - beginj) == (endi - endj))
		{
			cout << "Elephant can go." << endl;
		}

		else
		{
			cout << "Elephant can not go." << endl;
		}	
	}

	void Horse(){
		if(endi == begini - 2 && (endj == beginj - 1 || endj == beginj + 1) ||
		   endi == begini - 1 && (endj == beginj - 2 || endj == beginj + 2) ||
		   endi == begini + 1 && (endj == beginj - 2 || endj == beginj + 2) ||
		   endi == begini + 2 && (endj == beginj - 1 || endj == beginj + 1))
			{
				cout << "Horse can go." << endl;
			}
			else
			{		
				cout << "Horse can not go." << endl;
			}	
	}

	void Warrior (){
		if (beginj == endj && endi == begini + 1)
		{
			cout << "Warrior can go." << endl;
		}
		else
		{
			cout << "Warrior can not go." << endl;
		}

	}

private:
	int begini;
	int beginj;
	int endi;
	int endj;
};


istream& operator >> (istream& stream, Chees& other)
{
    stream  >> other.begini >>  other.beginj >>  other.endi >>  other.endj;
    return stream;
}



int main (){
/*    enum Figurs {
        KING,
        QUEEN,
        BOAT,
        ELEPHANT,
        HORSE,
        WARRIOR
    };
*/

Chees chees;
int figure = 0;
cout << "Pleas enter figure in chess (1-> King or 2-> Queen or 3-> Boat or 4-> Elephant or 5-> Horse or 6-> Warrior). " 
<< endl;
cin >> figure;
cin >> chees;

switch (figure)
{
	case 1:
	{
		chees.King();
		break;
	}  
	
	case 2:
	{
		chees.Queen();
		break;				
	}

	case 3:
	{
		chees.Boat();
		break;
	}
	
	case 4:
	{
		chees.Elephant();
		break;
	}
	
	case 5:
	{
		chees.Horse();
		break;
	}

	case 6:
	{
		chees.Warrior();
		break;
	}
	
	default:
	{
		cout << "Please enter true name a figure" << endl;		
	}
}
return 0;
}
