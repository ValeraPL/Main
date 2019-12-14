#include <iostream>
#include <fstream>
#include "bike.h"

using namespace std;

int main(int argc, char *argv[]) {
	int inch;
	string color;

	bool start = true;
	while(start == true) {
		Bike bike;

		cout << "Введите размер колеса: ";
		cin >> inch;
		bike.setWheelsInch(inch);

		cout << "Введите цвет: ";
		cin >> color;
		bike.setColor(color);

		ofstream file("bikes.txt", ios_base::out | ios_base::app);
		file << "color: " << bike.getColor() << " inch: " << bike.getWheelsInch() << "\n";
		file.close();

		cout << "Записано" << endl;
	}

	return 0;
}