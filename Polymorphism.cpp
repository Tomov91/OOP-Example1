#include<vector>
#include<sstream>
#include <iostream>
#include<string>
#include<map>
#include<algorithm>
using namespace std;

class Car {
private:
	string name;
	string color;
	int price;
	bool IsBroken;
									//Правиш конструктор ако искаш да зададеш стойности на променливите в класа.
public:
	Car(string name, string color, int price){
		Name = name;
		Color = color;
		Price = price;
		IsBroken = false;
	}                 
	void getInfo() {
		cout << "Name: " << name << endl;
		cout << "Color: " << color << endl;						//Tова се нарича МЕТОД
		cout << "Price: " << price << "лв" << endl;
	}
	void crashCar() {
		cout << name << " is crashed" << endl;
		IsBroken = true;
	}
	void repairCar() {
		cout << name << " repaired" << endl;
		IsBroken = false;
	}
	void move() {
		if (IsBroken) {
			cout << car << " is broken" << endl;
		}
		else
		{
			cout << car << "is driving " << endl;
		}
	}

};
	class FlyingCar :public Car {				//Наследяване
	public:													//Наследяваме конструктора от класа
		FlyingCar(string name, string color, int price) :Car(name, color, price) {

		}
	};
int main()
{
	Car ford("Ford", "Red", 50000);
	Car volvo("Volvo", "Black", 70000);
	FlyingCar flyingCar("SkyFury", "Black", 90000);
	ford.crashCar();
	
	
}


