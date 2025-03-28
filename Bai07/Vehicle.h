#pragma once
#include <iostream>
#include <string>
using namespace std;
class Vehicle
{
	string ChuXe;
	string LoaiXe;
	double TriGiaXe;
	double DungTich;
	double Thue;
public:
	Vehicle();
	Vehicle(string, string, double, double);
	string getChuXe();
	string getLoaiXe();
	double getTriGiaXe();
	double getDungTich();
	double getThue();
	void setChuXe(string);
	void setLoaiXe(string);
	void setTriGiaXe(double);
	void setDungTich(double);
	void TinhThue();
	void Nhap();
	void Xuat();
};
class arrVehicle {
	Vehicle* xe;
	int num;
public:
	arrVehicle() {
		xe = nullptr;
		num = 0;
	}
};

