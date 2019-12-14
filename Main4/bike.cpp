#include <iostream>
#include "bike.h"

using std::string;

Bike::Bike() {
	wheelsInch_ = 0;
	color_ = "White";
}

Bike::Bike(string color) {
	color_ = color;
}

Bike::Bike(int wheelsInch) {
	wheelsInch_ = wheelsInch;
}

Bike::Bike(int wheelsInch, string color) {
	wheelsInch_ = wheelsInch;
	color_ = color;
}

void Bike::setWheelsInch(int wheelsInch) {
	wheelsInch_ = wheelsInch;
}

int Bike::getWheelsInch() {
	return wheelsInch_;
}

void Bike::setColor(string color) {
	color_ = color;
}

string Bike::getColor() {
	return color_;
}

Bike::~Bike() {

}