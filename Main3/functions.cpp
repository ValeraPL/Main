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
	cout << "ЗАПИСЬ: ";

	ofstream writeFile("text.txt");

	string str;
	getline(cin, str);
	writeFile << str;
	
	writeFile.close();
}

void read() {
	cout << "ЧТЕНИЕ: ";

	ifstream readFile("text.txt");

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