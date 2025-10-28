#include <iostream>
#include <string>
using namespace std;

int romanCharValue(char r);

int convertRomanToInt(string s);

int main() {
	string number;
	
	do {
		cout << "Enter a roman numeral: ";
		cin >> number;

		cout << number << " = " << convertRomanToInt(number) << endl;
	} while (number != "q" || number != "Q");
}
int romanCharValue(char r) {
	int value = 0;
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
int convertRomanToInt(string s) {
	int total = 0;
	
	for (int i = 0; i < size(s); i++) {
		if (romanCharValue(s[i]) >= romanCharValue(s[i + 1]) || size(s) == 1) {
			total = total + romanCharValue(s[i]);

			
		}
		else {
			total = total + (romanCharValue(s[i + 1]) - romanCharValue(s[i]));
			
			s.erase(i, 1);
		}

	}

	return total;
}