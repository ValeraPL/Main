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

		cout << "Enter wheels inch: ";
		cin >> inch;
		bike.setWheelsInch(inch);

		cout << "Enter color: ";
		cin >> color;
		bike.setColor(color);

		ofstream file("bikes.txt", ios_base::out | ios_base::app);
		file << "color: " << bike.getColor() << " inch: " << bike.getWheelsInch() << "\n";
		file.close();

		cout << "WRITE" << endl;
	}

	return 0;
}

// TODO Узнать тип введенных данных