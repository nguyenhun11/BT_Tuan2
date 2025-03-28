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
ThoiGian::ThoiGian(float a) {
	gio = (int) a;
	float rest = a - gio;
	phut = (int)rest * 60;
	giay = (int)((rest * 60 - phut) * 60);
	correct();
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
void ThoiGian::Xuat() {
	cout << gio << ":" << phut << ":" << giay << endl;
}
void ThoiGian::Nhap() {
	cout << "Nhap thoi gian:\n";
	cout << "Gio: ";
	cin >> gio;
	cout << "Phut: ";
	cin >> phut;
	cout << "Giay: ";
	cin >> giay;
	correct();
}
ThoiGian ThoiGian::Add(ThoiGian a) {
	gio += a.gio;
	phut += a.phut;
	giay += a.giay;
	correct();
	return *this;

}
ThoiGian ThoiGian::Multi(int a) {
	gio *= a;
	phut *= a;
	giay *= a;
	correct();
	return *this;
}
ThoiGian ThoiGian::Tru(ThoiGian a) {
	return this->Add(a.Multi(-1));
}
