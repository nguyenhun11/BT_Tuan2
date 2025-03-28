#include "SoPhuc.h"
SoPhuc::SoPhuc() {
	re = 0;
	im = 0;
}
SoPhuc::SoPhuc(float a, float b) {
	re = a;
	im = b;
}
void SoPhuc::Nhap() {
	cout << "Nhap so phuc: \n";
	cout << "Re = ";
	cin >> re;
	cout << "Im = ";
	cin >> im;
}
void SoPhuc::Xuat() {
	cout << "(" << re << " + " << im << "i" << ")";
}
SoPhuc SoPhuc::cong(SoPhuc a) {
	return SoPhuc(re + a.re, im + a.im);
}
SoPhuc SoPhuc::nhan(float a) {
	return SoPhuc(a * re, a * im);
}
SoPhuc SoPhuc::tru(SoPhuc a) {
	return this->cong(a.nhan(-1));
}
SoPhuc SoPhuc::nhan(SoPhuc a) {
	return SoPhuc(re * a.re - im * a.im, re * a.im + im * a.re);
}
SoPhuc SoPhuc::chia(SoPhuc a) {
	return SoPhuc(re * a.re + im * a.im, a.re * im - re * a.im).chia(im * im + a.im * a.im);
}
SoPhuc SoPhuc::chia(float a) {
	return this->nhan(1 / a);
}