//Mã số sinh viên: 24520604
//Họ và tên: Nguyễn Gia Hưng
//Ngày sinh: 11/01/2006
//Lớp: IT002.P26.2
#pragma once
#include <iostream>
#include <string>
#include <iomanip>
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
	friend istream& operator>>(istream& is, Vehicle&);
	friend ostream& operator<<(ostream& os, Vehicle);//Xuất đầy đủ thông tin
	void XuatNgang();//Xuất ngang
};
class ListVehicle{   //LinkedList
	struct NodeVehicle {
		Vehicle xe;
		NodeVehicle* next;
		NodeVehicle() {
			next = nullptr;
		}
	};
public:
	NodeVehicle* Head;
	NodeVehicle* Tail;
	int size;
	ListVehicle();
	~ListVehicle();
	void addVehicle(Vehicle); //Thêm vào sau
	void XuatDanhSach();
};
