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

	string fileName, str, num;
	bool write = true;
	int i = 0;

	cin >> fileName;

	ofstream writeFile(fileName);

	while(write == true) {
		i++;
		getline(cin, str);

		if(str == "./exit") {
			write = false;
		} else {
			writeFile << i << " " << str + "\n";
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
	cout << "ОТЧИСТИТЬ: *имя файла + расширение* ";

	string input, name, roger;
	cin >> input;
	name = input;

	cout << "ПОСЛЕ ОТЧИСТКИ ФАЙЛА ВЫ НЕ СМОЖЕТЕ ЕГО ВОСТАНОВИТЬ. ВЫ УВЕРЕННЫ[Y/N]: ";

	cin >> input;
	roger = input;

	if(roger == "Y" || roger == "y") {
		ifstream fileName(name, ios_base::out | ios_base::trunc);
		fileName.close();
	} else {
		cout << "ОТМЕНА" << endl;
	}
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

void find() {
	string fileName, findString, buffString;
	int findNum;

	cout << "НАЙТИ: *имя файла + расширение* ";
	cin >> fileName;

	cout << "НАЙТИ: *слово* ";
	cin >> findString;

	ifstream findFile(fileName);

	while(findFile >> buffString) {
		if(buffString == findString) {
			findFile >> findNum;
			cout << "СЛОВО: " << buffString << " СТРОКА: " << findNum << endl;
		}
	}

	findFile.close();
}