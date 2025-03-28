#pragma once
#include <iostream>
using namespace std;

class Day
{
	int ngay, thang, nam;
	void correct();
public:
	Day();
	Day(int, int, int);
	void Nhap();
	void Xuat();
	bool KiemTra();
	bool NamNhuan();
	string GetThu();
	int GetNgay();
	int GetThang();
	int GetNam();
	void SetNgay(int);
	void SetThang(int);
	void SetNam(int);
	Day AddNgay(int);
	Day AddThang(int);
	Day AddNam(int);
	Day TakeNgay(int);
	Day TakeThang(int);
	Day TakeNam(int);

};

