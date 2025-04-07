//Mã số sinh viên: 24520604
//Họ và tên: Nguyễn Gia Hưng
//Ngày sinh: 11/01/2006
//Lớp: IT002.P26.2

#pragma once
#include <iostream>
using namespace std;
class Point {//Điểm (x,y)
	int x;
	int y;
public:
	Point();//Mặt định là (0,0)
	Point(int, int);//Mặc định (int,int)
	int getX();//Lấy hoành độ của điểm
	int getY();//Lấy tung độ của điểm
	void setX(int);//Thay đổi hoành độ của điểm
	void setY(int);//Thay đổi tung độ của điểm
	void setPoint(int,int);//Thay đổi nội dung của điểm
	void TinhTien(int, int);//Tịnh tiến điểm theo vector (dx, dy)
	friend istream& operator>>(istream& is, Point&);
	friend ostream& operator<< (ostream& os, Point);
	
	
};