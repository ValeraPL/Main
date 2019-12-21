#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {
	string input;
	int size;
	cin >> size;
	vector<string> arrayName(size);

	for(int i = 0; i < size; i++) {
		cin >> input;
		arrayName[i] = input;
	}

	ofstream file("text.txt");

	for(int i = 0; i < size; i++) {
		file << arrayName[i] << "\n";
	}

	file.close();

	return 0;
}