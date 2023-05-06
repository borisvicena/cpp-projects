#include <iostream>
using namespace std;

class Animal
{
protected:
	string color;
	bool isMoving = false;
public:
	void StartMoving()
	{
		if (isMoving == false)
		{
			cout << "is moving" << endl;
			isMoving = true;
		}
	}

	void StopMoving()
	{
		if (isMoving == true)
		{
			cout << "is not moving" << endl;
			isMoving = false;
		}
	}

	void SetColor(string color)
	{
		this->color = color;
	}
};

class Dog : public Animal
{
public:
	void Bark()
	{
		cout << "Haf haf" << endl;
	}

	void GetColor()
	{
		cout << color << endl;
	}
};


int main()
{
	Dog dogger;
	dogger.SetColor("brown");
	dogger.Bark();
	dogger.GetColor();
	dogger.StartMoving();
	dogger.StopMoving();

	return 0;
}