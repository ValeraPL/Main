#include <string>

using std::string;

int operate(int num1, int num2, std::string command) {
	int res;

	if(command == "Плюс") {
		res = num1 + num2;
	} else if(command == "Минус") {
		res = num1 - num2;
	} else if(command == "Умножить") {
		res = num1 * num2;
	} else if(command == "Делить") {
		res = num1 / num2;
	}

	return res;
}