#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[]) {
	//Init with count and char:
	string s1(9, 'Z');
	string s2 = string(8, 'z');
	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;

	//getline():
	string line;
	while(getline(cin, line)) {
		if (!line.empty() && line.size() <= 10) {
			for (auto &c : line) {
				c = toupper(c);//'c' is a reference, so it can be modified
			}
			cout << line << endl;
		} else {
			cout << "Too long!!" << endl;
		}
	}

	return 0;
}