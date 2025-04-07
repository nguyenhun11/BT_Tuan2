//Mã số sinh viên: 24520604
//Họ và tên: Nguyễn Gia Hưng
//Ngày sinh: 11/01/2006
//Lớp: IT002.P26.2
//

#include "SoPhuc.h"
SoPhuc::SoPhuc() {
	re = 0;
	im = 0;
}
SoPhuc::SoPhuc(double a) {
	re = a;
	im = 0;
}
SoPhuc::SoPhuc(double a, double b) {
	re = a;
	im = b;
}
double SoPhuc::getRe() {
	return re;
}
double SoPhuc::getIm() {
	return im;
}
void SoPhuc::setRe(double a) {
	re = a;
}
void SoPhuc::setIm(double a) {
	im = a;
}
SoPhuc SoPhuc::operator+(SoPhuc a) {
	return SoPhuc(re + a.re, im + a.im);
}
SoPhuc SoPhuc::operator-(SoPhuc a) {
	return *this + (a * -1);
}
SoPhuc SoPhuc::operator*(SoPhuc a) {
	return SoPhuc(re * a.re - im * a.im, re * a.im + im * a.re);
}
SoPhuc SoPhuc::operator/(SoPhuc a) {
	double mau = a.re * a.re + a.im * a.im;
	double newRe = (re * a.re + im * a.im) / mau;
	double newIm = (im * a.re - re * a.im) / mau;
	return SoPhuc(newRe, newIm);
}

istream& operator>>(istream& is, SoPhuc& a) {
	cout << "Nhap so phuc:\nRe = ";
	is >> a.re;
	cout << "Im = ";
	is >> a.im;
	return is;
}
ostream& operator<<(ostream& os, SoPhuc a) {
	if (a.im == 0) {
		os << "(" << a.re <<  ")";
		return os;
	}
	else if (a.re == 0) {
		if (a.im == 1) {
			os << "(i)";
			return os;
		}
		if (a.im == -1) {
			os << "(-i)";
			return os;
		}
		os << "(" << a.im << "i)";
		return os;
	}

	os << "(" << a.re;
	if (a.im > 0) {
		os << " + ";
		if (a.im == 1) {
			os << "i)";
			return os;
		}
		os << a.im << "i)";
		return os;
	}
	else {
		os << " - ";
		if (a.im == -1) {
			os << "i)";
			return os;
		}
		os << -a.im << "i)";
		return os;
	}
}
