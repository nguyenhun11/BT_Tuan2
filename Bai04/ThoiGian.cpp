//Mã số sinh viên: 24520604
//Họ và tên: Nguyễn Gia Hưng
//Ngày sinh: 11/01/2006
//Lớp: IT002.P26.2

#include "ThoiGian.h"



ThoiGian::ThoiGian() {
	gio = 0;
	phut = 0;
	giay = 0;
}
ThoiGian::ThoiGian(int a = 0, int b = 0, int c = 0) {
	gio = a;
	phut = b;
	giay = c;
	correct();
}
ThoiGian::ThoiGian(double a) {
	gio = (int) a;
	float rest = a - gio;
	phut = (int)rest * 60;
	giay = (int)((rest * 60 - phut) * 60);
	correct();
}
void ThoiGian::setGio(int a) {
	gio = a;
	correct();
}
void ThoiGian::setPhut(int a) {
	phut = a;
	correct();
}
void ThoiGian::setGiay(int a) {
	giay = a;
	correct();
}
int ThoiGian::getGio() {
	return gio;
}
int ThoiGian::getPhut() {
	return phut;
}
int ThoiGian::getGiay() {
	return giay;
}

void ThoiGian::correct() {
	while (giay < 0) {
		phut--;
		giay += 60;
	}
	while (giay >= 60) {
		phut += giay / 60;
		giay %= 60;
	}
	while (phut < 0) {
		gio--;
		phut += 60;
	}
	while (phut >= 60) {
		gio += phut / 60;
		phut %= 60;
	}
}
istream& operator>>(istream& is, ThoiGian& a) {
	cout << "Nhap thoi gian:\n";
	cout << "Gio: ";
	is >> a.gio;
	cout << "Phut: ";
	is >> a.phut;
	cout << "Giay: ";
	is >> a.giay;
	a.correct();
	return is;
}
ostream& operator<<(ostream& os, ThoiGian a) {
	os << "["<< a.gio << ":" << a.phut << ":" << a.giay << "]\n";
	return os;
}
ThoiGian ThoiGian::operator+(ThoiGian a) {
	return ThoiGian(this->gio + a.gio, this->phut + a.phut, this->giay + a.giay);
}
ThoiGian ThoiGian::operator-(ThoiGian a) {
	return *this + a * (-1);
}
ThoiGian ThoiGian::operator*(double a) {
	return ThoiGian(gio * a, phut * a, giay * a);
}
