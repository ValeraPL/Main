#include <iostream>
#include <fstream>
#include "functions.h"

using namespace std;

int main(int argc, char *argv[]) {
	bool start = true;
	cout << "1:Запись\n2:Чтение\n3:Отчистить\n4:Удалить\n5:Выход" << endl;

	while(start == true) {
		cout << "МЕНЮ: ";

		int choice;
		cin >> choice;
		cin.ignore();

		switch(choice) {
			case 1:
				write();
				break;
			case 2:
				read();
				break;
			case 3:
				clear();
				break;
			case 4:
				erase();
				break;
			case 5:
				start = false;
				break;
			case 6:
				find();
				break;
			default:
				cout << "1:Запись\n2:Чтение\n3:Отчистить\n4:Удалить\n5:Выход" << endl;
				break;
		}
	}

	return 0;
}