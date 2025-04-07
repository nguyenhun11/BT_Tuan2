//Mã số sinh viên: 24520604
//Họ và tên: Nguyễn Gia Hưng
//Ngày sinh: 11/01/2006
//Lớp: IT002.P26.2
#include "Point.h"
Point::Point() {
	x = 0;
	y = 0;
}
Point::Point(int a, int b) {
	x = a;
	y = b;
}
int Point::getX() {
	return x;
}
int Point::getY() {
	return y;
}
void Point::setX(int a) {
	x = a;
}
void Point::setY(int a) {
	y = a;
}
void Point::setPoint(int a, int b) {
	x = a;
	y = b;
}
void Point::TinhTien(int dx, int dy) {
	cout << *this;
	x += dx;
	y += dy;
	cout <<" + (" <<dx <<", "<<dy<<")" << " --> " << *this;
}
istream& operator>>(istream& is, Point& p) {
	cout << "Nhap diem:\nx = ";
	is >> p.x;
	cout << "y = ";
	is >> p.y;
	return is;
}
ostream& operator<< (ostream& os, Point p) {
	os << "(" << p.x << ", " << p.y << ")";
	return os;
}