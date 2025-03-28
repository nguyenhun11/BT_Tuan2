#include "PhanSo.h"
using namespace std;
PhanSo::PhanSo() {
	tu = 0;
	mau = 1;
}
PhanSo::PhanSo(int a, int b = 1) {
	tu = a;
	mau = b;
}
void PhanSo::NhapPhanSo() {
	cout << "Nhap tu va mau: ";
	cin >> tu >> mau;
	RutGon();
}
void PhanSo::XuatPhanSo() {
	if (tu == 0) cout << 0;
	else if (mau == 1) cout << tu;
	else if (mau == -1) cout << -tu;
	else if (mau < 0) {
		cout << -tu << "/" << -mau;
	}
	else cout << tu << "/" << mau;
}
PhanSo PhanSo::cong(PhanSo a) {
	PhanSo result;
	result.tu = tu * a.mau + a.tu * mau;
	result.mau = a.mau * mau;
	result.RutGon();
	return result;
}
PhanSo PhanSo::tru(PhanSo a) {
	a.tu *= -1;
	return this->cong(a);
}
PhanSo PhanSo::nhan(PhanSo a) {
	PhanSo result;
	result.tu = tu * a.tu;
	result.mau = mau * a.mau;
	result.RutGon();
	return result;
}
PhanSo PhanSo::NghichDao() {
	PhanSo result;
	result.tu = mau;
	result.mau = tu;
	return result;
}
PhanSo PhanSo::chia(PhanSo a) {
	return this->nhan(a.NghichDao());
}
float PhanSo::Giatri() {
	return (float)tu / mau;
}
void PhanSo::RutGon() {
	int Gcd = gcd(tu, mau);
	tu /= Gcd;
	mau /= Gcd;
}
int PhanSo::gcd(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
int PhanSo::getMau() {
	return mau;
}
int PhanSo::getTu() {
	return tu;
}

