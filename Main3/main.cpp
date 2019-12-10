#include <iostream>
#include <fstream>

using namespace std;

void write() {
	cout << "ЗАПИСЬ: ";

	ofstream writeFile("text.txt");

	string str;
	getline(cin, str);
	writeFile << str;
	
	writeFile.close();
}

void read() {
	cout << "ЧТЕНИЕ: " << endl;

	string readString;
	ifstream readFile("text.txt");

	getline(readFile, readString);
	cout << readString << endl;

	readFile.close();
}

void clear() {
	ifstream clearFile("text.txt", ios_base::out);
	clearFile.close();
}

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
			case 5:
				start = false;
				break;
			default:
				cout << "1:Запись\n2:Чтение\n3:Отчистить\n4:Удалить\n5:Выход" << endl;
				break;
		}
	}

	return 0;
}