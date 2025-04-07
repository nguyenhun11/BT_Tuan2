//Mã số sinh viên: 24520604
//Họ và tên: Nguyễn Gia Hưng
//Ngày sinh: 11/01/2006
//Lớp: IT002.P26.2
//

#pragma once
#include<iostream>
using namespace std;
class SoPhuc {// Số phức a + bi
	double re;
	double im;
public:
	SoPhuc();
	SoPhuc(double);
	SoPhuc(double, double);
	double getRe();
	double getIm();
	void setRe(double);
	void setIm(double);
	friend istream& operator>>(istream& is, SoPhuc&);
	friend ostream& operator<<(ostream& os, SoPhuc);
	SoPhuc operator+(SoPhuc);
	SoPhuc operator-(SoPhuc);
	SoPhuc operator*(SoPhuc);
	SoPhuc operator/(SoPhuc);
};

