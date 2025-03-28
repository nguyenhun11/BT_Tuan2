#pragma once
#include <iostream>
using namespace std;

class ThoiGian
{
private:
	int gio, phut, giay;
	void correct();
public:
	ThoiGian();
	ThoiGian(int, int, int);
	ThoiGian(float);
	void Xuat();
	void Nhap();
	void setGio(int a) {
		gio = a;
		correct();
	}
	void setPhut(int a) {
		phut = a;
		correct();
	}
	void setGiay(int a) {
		giay = a;
		correct();
	}
	int getGio() {
		return gio;
	}
	int getPhut() {
		return phut;
	}
	int getGiay() {
		return giay;
	}
	ThoiGian Add(ThoiGian);
	ThoiGian AddGio(int a) {
		gio += a;
		return *this;
	}
	ThoiGian AddPhut(int a) {
		phut += a;
		correct();
		return*this;
	}
	ThoiGian AddGiay(int a) {
		giay += a;
		correct();
		return *this;
	}
	ThoiGian Multi(int);
	ThoiGian Tru(ThoiGian);

};

