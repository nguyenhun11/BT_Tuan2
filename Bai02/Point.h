#pragma once
#include <iostream>
using namespace std;
class Point {
	int x;
	int y;
public:
	Point();
	Point(int, int);
	int getX();
	int getY();
	void setX(int);
	void setY(int);
	void setPoint(int,int);
	void TinhTien(int, int);
	void Nhap();
	void Xuat();
	
};