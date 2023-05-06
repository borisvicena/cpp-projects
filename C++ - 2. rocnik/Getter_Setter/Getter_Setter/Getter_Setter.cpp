#include <iostream>
using namespace std;

class Suradnice
{
private:
	int x;
	int y;

public:

	Suradnice(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	Suradnice()
	{

	}

	void SetX(int x)
	{
		this->x= x;
	}

	int GetX()
	{
		return this->x;
	}

	void SetY(int y)
	{
		this->y = y;
	}

	int GetY()
	{
		return this->y;
	}
};

int main()
{
	Suradnice suradnice;

	suradnice.SetX(90);
	suradnice.SetY(180);

	cout << "X v objekte Suradnice je: " << suradnice.GetX() << endl;
	cout << "Y v objekte Suradnice je: " << suradnice.GetY() << endl;


	cout << endl;
	//Suradnice s konstruktorom
	Suradnice suradnice2(76, 45);

	cout << "Suradnice 2: " << suradnice2.GetX() << " " << suradnice2.GetY() << endl;

	return 0;
}