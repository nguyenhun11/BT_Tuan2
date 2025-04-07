//Mã số sinh viên: 24520604
//Họ và tên: Nguyễn Gia Hưng
//Ngày sinh: 11/01/2006
//Lớp: IT002.P26.2

#pragma once
#include <iostream>
using namespace std;
class cString
{
private:
	char* str;
public:
	cString();
	cString(char*);
	cString(const char*);
	cString(const cString& other);//copy constructor
	cString& operator=(const cString& other); //gán mà không strcpy
	int strlen() const;//const để dùng trong copy constructor
	static cString strcat(const cString&, const cString&);
	void strrev();
	void strupp();
	void strlow();
	static void cinstr(cString&, int);
	friend ostream& operator<<(ostream& os, cString);
	~cString();
};

