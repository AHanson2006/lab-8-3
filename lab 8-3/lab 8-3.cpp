#include <iostream>
#include <string>
using namespace std;

int romanCharValue(char r);

int main() {
	char number;
	cout << "Enter a roman numeral: ";
	cin >> number;

	cout << "Numerical value: " << romanCharValue(number);
}
int romanCharValue(char r) {
	int value;
	if (r == 'i' || r == 'I') {
		value = 1;
	}
	else if (r == 'v' || r == 'V') {
		value = 5;
	}
	else if (r == 'x' || r == 'X') {
		value = 10;
	}
	else if (r == 'l' || r == 'L') {
		value = 50;
	}
	else if (r == 'c' || r == 'C') {
		value = 100;
	}
	else if (r == 'd' || r == 'D') {
		value = 500;
	}
	else if (r == 'm' || r == 'M') {
		value = 1000;
	}

	return value;
}