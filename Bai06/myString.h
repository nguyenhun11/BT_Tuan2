#pragma once
#include <iostream>
using namespace std;
class myString
{
private:
	char* str;
public:
	myString();
	myString(char*);
	myString(const char*);
	myString(const myString& other);
	myString& operator=(const myString& other);
	int strlen() const;
	static myString strcat(const myString&, const myString&);
	void strrev();
	void strupp();
	void strlow();
	static void cinstr(myString&, int);
	void coutstr();
	~myString();
};

