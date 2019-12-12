#include <iostream>
#include <string>
#include <fstream>

using std::cin;
using std::endl;
using std::ios_base;
using std::cout;
using std::string;
using std::ofstream;
using std::ifstream;
using std::getline;

void write() {
	cout << "ЗАПИСЬ: *имя файла + расширение* " ;

	string fileName;
	cin >> fileName;

	ofstream writeFile(fileName);

	bool write = true;
	string str;

	while(write == true) {
		getline(cin, str);

		if(str == "./exit") {
			write = false;
		} else {
			writeFile << str + "\n";
		}
	}
	
	writeFile.close();
}

void read() {
	cout << "ЧТЕНИЕ: *имя файла + расширение* ";

	string fileName;
	cin >> fileName;

	ifstream readFile(fileName);

	cin.ignore();
	string readString;
	while(getline(readFile, readString)) {
		cout << readString << endl;
	}

	readFile.close();
}

void clear() {
	ifstream clearFile("text.txt", ios_base::out | ios_base::trunc);
	clearFile.close();
}

void erase() {
	cout << "УДАЛИТЬ: *имя файла + расширение* ";

	string input, name, roger;
	cin >> input;
	name = input;

	cout << "ПОСЛЕ УДАЛЕНИЯ ФАЙЛА ВЫ НЕ СМОЖЕТЕ ЕГО ВОСТАНОВИТЬ. ВЫ УВЕРЕННЫ[Y/N]: ";

	cin >> input;
	roger = input;

	if(roger == "Y" || roger == "y") {
		remove(name.c_str());
	} else {
		cout << "ОТМЕНА" << endl;
	}
}