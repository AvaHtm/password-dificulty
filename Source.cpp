#include<iostream>
#include<cstring>
using namespace std;

bool inrange(char str[], char s, char f) {
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= s && str[i] <= f) {
			return true;
		}
	}
	return false;
}

int main() {
	int difficulty = 0;
	char password[225];
	cout << "enter pass:";
	cin >> password;
	if (strlen(password) >= 6) {
		if (inrange(password, '0', '9')) {
			difficulty++;
		}
		if (inrange(password, '!', '/')) {
			difficulty++;
		}
		if (inrange(password, 'a', 'z')) {
			difficulty++;
		}
		if (inrange(password, 'A', 'Z')) {
			difficulty++;
		}
		if (strlen(password) >= 8) {
			difficulty++;
		}
	}
	cout << "Difficulty: " << difficulty << endl;
	return 0;
}
