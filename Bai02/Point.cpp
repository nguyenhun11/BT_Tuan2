#include "Point.h"
Point::Point() {
	x = 0;
	y = 0;
}
Point::Point(int a, int b) {
	x = a;
	y = b;
}
void Point::Nhap() {
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
}
void Point::Xuat() {
	cout << "(" << x << ";" << y << ") ";
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
	x += dx;
	y += dy;
}