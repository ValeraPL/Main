#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int operate(int num1, int num2, string command) {
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

int main() {
	srand(time(NULL));

	cout << "Введите комманду" << endl;
	string command = "";
	getline(cin, command);

	cout << "Введите размер массива" << endl;
	int size = 0;
	cin >> size;

	int &refSize = size;

	int *array = new int[refSize];

	for(int i = 0; i < refSize; i++) {
		int num1 = 1 + rand() % 10;
		int num2 = 1 + rand() % 10;
		array[i] = operate(num1, num2, command);
	}

	for(int j = 0; j < refSize; j++) {
		cout << array[j] << endl;
	}

	delete [] array;

	return 0;
}