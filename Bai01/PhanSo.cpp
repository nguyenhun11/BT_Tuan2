//Mã số sinh viên: 24520604
//Họ và tên: Nguyễn Gia Hưng
//Ngày sinh: 11/01/2006
//Lớp: IT002.P26.2

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
PhanSo::PhanSo(int a) {
	tu = a;
	mau = 1;
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
PhanSo PhanSo::operator+(PhanSo a)
{
	PhanSo result;
	result.tu = tu * a.mau + a.tu * mau;
	result.mau = a.mau * mau;
	result.RutGon();
	return result;

}
PhanSo PhanSo::operator-(PhanSo a) {
	a.tu *= -1;
	return *this + a;
}
PhanSo PhanSo::operator*(PhanSo a) {
	a.tu *= this->tu;
	a.mau *= this->mau;
	a.RutGon();
	return a;
}
PhanSo PhanSo::operator/(PhanSo a) {
	a.tu = a.tu ^ a.mau;
	a.mau = a.tu ^ a.mau;
	a.tu = a.tu ^ a.mau;
	return *this * a;
}
istream& operator>>(istream& is,  PhanSo& a) {
	cout << "Nhap phan so:\n";
	cout << "tu: ";
	is >> a.tu;
	cout << "mau: ";
	is >> a.mau;
	while (a.mau == 0) {
		cout << "Nhap lai mau: ";
		is >> a.mau;
	}
	a.RutGon();
	return is;
}
ostream& operator<<(ostream& os, const PhanSo a) {
	if (a.tu == 0) os << 0;
	else if (a.mau == 1) os << a.tu;
	else if (a.mau == -1) cout << -a.tu;
	else if (a.mau < 0) {
		os << -a.tu << "/" << -a.mau;
	}
	else os << a.tu << "/" << a.mau;
	return os;
}
//void PhanSo::NhapPhanSo() {
//	cout << "Nhap tu va mau: ";
//	cin >> tu >> mau;
//	RutGon();
//}
//void PhanSo::XuatPhanSo() {
//	if (tu == 0) cout << 0;
//	else if (mau == 1) cout << tu;
//	else if (mau == -1) cout << -tu;
//	else if (mau < 0) {
//		cout << -tu << "/" << -mau;
//	}
//	else cout << tu << "/" << mau;
//}
//PhanSo PhanSo::cong(PhanSo a) {
//	PhanSo result;
//	result.tu = tu * a.mau + a.tu * mau;
//	result.mau = a.mau * mau;
//	result.RutGon();
//	return result;
//}
//PhanSo PhanSo::tru(PhanSo a) {
//	a.tu *= -1;
//	return this->cong(a);
//}
//PhanSo PhanSo::nhan(PhanSo a) {
//	PhanSo result;
//	result.tu = tu * a.tu;
//	result.mau = mau * a.mau;
//	result.RutGon();
//	return result;
//}
//PhanSo PhanSo::chia(PhanSo a) {
//	return this->nhan(a.NghichDao());
//}
//PhanSo PhanSo::NghichDao() {
//	if (tu == 0) return PhanSo(0,1);
//	PhanSo result;
//	result.tu = mau;
//	result.mau = tu;
//	return result;
//}

