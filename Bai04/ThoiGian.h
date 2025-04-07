//Mã số sinh viên: 24520604
//Họ và tên: Nguyễn Gia Hưng
//Ngày sinh: 11/01/2006
//Lớp: IT002.P26.2

#pragma once
#include <iostream>
using namespace std;


class ThoiGian
{
private:
	int gio, phut, giay;
	void correct(); //Không thể và không cần truy cập từ bên ngoài, vì đã gọi ngay sau các phương thức thay đổi
public:
	ThoiGian();
	ThoiGian(int, int, int);
	ThoiGian(double);
	friend istream& operator>>(istream& is, ThoiGian&);
	friend ostream& operator<<(ostream& os, ThoiGian);
	void setGio(int);
	void setPhut(int);
	void setGiay(int);
	int getGio();
	int getPhut();
	int getGiay();
	ThoiGian operator+(ThoiGian);
	ThoiGian operator-(ThoiGian);
	ThoiGian operator*(double);
};

