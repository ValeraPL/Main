#include <iostream>

using namespace std;

void printName(string name) {
	cout << name << endl;
}

int main(int argc, char *argv[]) {
	string name;
	getline(cin, name);

	string &refName = name;
	printName(refName);

	return 0;
}