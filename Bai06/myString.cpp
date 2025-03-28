#include "myString.h"
int myString::strlen() const {
	int length = 0;
	while (str[length] != '\0') {
		length++;
	}
	return length;
}
myString::myString() {
	str = new char[1];
	str[0] = '\0'; 
}

myString::myString(char* s) {
	if (!s) {
		str = new char[1];
		str[0] = '\0';
		return;
	}
	int length = 0;
	while (s[length] != '\0') length++;
	str = new char[length + 1];
	for (int i = 0; i < length; i++) str[i] = s[i];
	str[length] = '\0';
}
myString::myString(const char* s) {
	if (!s) { 
		str = new char[1];
		str[0] = '\0'; 
		return;
	}
	int length = 0;
	while (s[length] != '\0') {
		length++;
	}
	str = new char[length + 1];
	for (int i = 0; i < length; i++) {
		str[i] = s[i];
	}
	str[length] = '\0';
}
myString::myString(const myString& other) {
	if (!other.str) {
		str = new char[1];
		str[0] = '\0';
		return;
	}
	int length = other.strlen();
	str = new char[length + 1];  
	for (int i = 0; i < length; i++) {
		str[i] = other.str[i]; 
	}
	str[length] = '\0';
}

myString& myString::operator=(const myString& other) {
	if (this == &other) return *this;
	delete[] str;
	if (!other.str) {
		str = new char[1];
		str[0] = '\0';
	}
	else {
		int length = other.strlen();
		str = new char[length + 1];
		for (int i = 0; i < length; i++) {
			str[i] = other.str[i];
		}
		str[length] = '\0';
	}

	return *this;
}
myString myString::strcat(const myString& s1, const myString& s2) {
	int len1 = s1.strlen();
	int len2 = s2.strlen();
	char* newStr = new char[len1 + len2 + 1];

	for (int i = 0; i < len1; i++) {
		newStr[i] = s1.str[i];
	}

	for (int i = 0; i < len2; i++) {
		newStr[len1 + i] = s2.str[i];
	}

	newStr[len1 + len2] = '\0'; 

	myString result(newStr);

	delete[] newStr; 

	return result; 
}
void myString::strrev() {
	int length = strlen();
	for (int i = 0; i < length / 2; i++) {
		char temp = str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = temp;
	}
}
void myString::strupp() {
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - ('a' - 'A');
	}
}
void myString::strlow() {
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + ('a' - 'A');
	}
}

void myString::cinstr(myString& s, int n) {
	if (s.str) { 
		delete[] s.str;
	}
	char* newStr = new char[n];
	int i = 0;
	char ch;
	while (i < n - 1 && (ch = getchar()) != '\n' && ch != EOF) {
		newStr[i] = ch;
		i++;
	}
	newStr[i] = '\0';
	s.str = newStr; 
}
void myString::coutstr() {
	if (!str) { 
		cout << "Chuoi rong." << endl;
		return;
	}
	for (int i = 0; str[i] != '\0'; i++) {
		cout << str[i];
	}
	cout << endl;
}
myString::~myString() {
	if (str) {
		delete[] str;
	}
}