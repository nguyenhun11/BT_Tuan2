//Mã số sinh viên: 24520604
//Họ và tên: Nguyễn Gia Hưng
//Ngày sinh: 11/01/2006
//Lớp: IT002.P26.2

#pragma once
#include <iostream>
using namespace std;

class Day
{
	int ngay, thang, nam;
	void correct();//Không thể và không cần truy cập từ bên ngoài, vì đã gọi ngay sau các phương thức thay đổi
	int SoNgay();//Số ngày tính từ ngày mốc 1/1/1
public:
	Day();
	Day(int, int, int);
	friend istream& operator>>(istream& is, Day&);
	friend ostream& operator<<(ostream& os, Day);
	int DayInMonth(int thang, int nam);
	bool KiemTra();
	bool NamNhuan();
	string GetThu();
	int GetNgay();
	int GetThang();
	int GetNam();
	void SetNgay(int);
	void SetThang(int);
	void SetNam(int);
	Day operator+(int);//Cộng ngày
	Day AddThang(int);
	Day AddNam(int);
	Day operator-(int);//Trừ đi int số ngày
	Day TakeThang(int);
	Day TakeNam(int);
	int operator-(Day);//Tính khoảng thời gian giữa 2 ngày;
	

};

