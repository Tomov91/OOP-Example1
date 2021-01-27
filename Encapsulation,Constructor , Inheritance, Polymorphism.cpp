#include<vector>
#include<sstream>
#include <iostream>
#include<string>
#include<map>
#include<algorithm>
using namespace std;

class Car {
protected:
	string Name;
	string Color;
	int Price;
	bool IsBroken;
	//Правиш конструктор ако искаш да зададеш стойности на променливите в класа.
public:
	Car(string name, string color, int price) {
		Name = name;
		Color = color;
		Price = price;
		IsBroken = false;
	}
	void getInfo() {
		cout << "Name: " << Name << endl;
		cout << "Color: " << Color << endl;						//Tова се нарича МЕТОД
		cout << "Price: " << Price << "lv" << endl;
	}
	void crashCar() {
		cout << Name << " is crashed" << endl;
		IsBroken = true;
	}
	void repairCar() {
		cout << Name << " repaired" << endl;
		IsBroken = false;
	}
	void move() {
		if (IsBroken) {
			cout << Name << " is broken" << endl;
		}
		else
		{
			cout << Name << " is driving " << endl;
		}
	}

};
class FlyingCar :public Car {				//Наследяване
public:													//Наследяваме конструктора от класа
	FlyingCar(string name, string color, int price) :Car(name, color, price) {

	}
	void move() {
		if (IsBroken) {
			cout << Name << " is broken" << endl;
		}
		else
		{
			cout << Name << " is flying " << endl;
		}
	}
};
class UnderwaterCar :public Car {				//Наследяване
public:													//Наследяваме конструктора от класа
	UnderwaterCar(string name, string color, int price) :Car(name, color, price) {

	}

	void move() {
		if (IsBroken) {
			cout << Name << " is broken" << endl;
		}
		else
		{
			cout << Name << " is diving " << endl;
		}
	}
};
	int main()
	{
		Car ford("Ford", "Red", 50000);
		Car volvo("Volvo", "Black", 70000);
		FlyingCar flyingCar("SkyFury", "Black", 90000);
		UnderwaterCar underwaterCar("SeaStorm", "Blue", 190000);

		ford.move();
		flyingCar.move();
		underwaterCar.move();
											//Polymorphism
		Car* car1 = &flyingCar;
		Car* car2 = &underwaterCar;
		car1->crashCar();
		car2->crashCar();


	}