#ifndef BIKE_H
#define BIKE_H

#include <iostream>

using std::string;

class Bike {
private:
	int wheelsInch_;
	string color_;

public:
	Bike();
	~Bike();
	Bike(int wheelsInch);
	Bike(string color);
	Bike(int wheelsInch, string color);

	void setWheelsInch(int wheelsInch);
	void setColor(string color);
	int getWheelsInch();
	string getColor();

};

#endif 