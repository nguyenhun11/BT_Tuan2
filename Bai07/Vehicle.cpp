#include "Vehicle.h"
Vehicle::Vehicle() {
	ChuXe = "";
	LoaiXe = "";
	TriGiaXe = 0;
	DungTich = 0;
	TinhThue();
}
Vehicle::Vehicle(string chuxe, string loaixe, double trigiaxe, double dungtich) {
	ChuXe = chuxe;
	LoaiXe = loaixe;
	TriGiaXe = (trigiaxe >= 0) ? trigiaxe : 0;
	DungTich = (dungtich >= 0) ? dungtich : 0;
	TinhThue();
}
string Vehicle::getChuXe() {
	return ChuXe;
}
string Vehicle::getLoaiXe() {
	return LoaiXe;
}
double Vehicle::getTriGiaXe() {
	return TriGiaXe;
}
double Vehicle::getDungTich() {
	return DungTich;
}
double Vehicle::getThue() {
	return Thue;
}
void Vehicle::setChuXe(string a) {
	ChuXe = a;
}
void Vehicle::setLoaiXe(string a) {
	LoaiXe = a;
}
void Vehicle::setTriGiaXe(double a) {
	TriGiaXe = a;
}
void Vehicle::setDungTich(double a) {
	DungTich = a;
}
void Vehicle::TinhThue() {
	if (DungTich < 100) Thue = TriGiaXe / 100;
	else if (DungTich < 200) Thue = 3 * TriGiaXe / 100;
	else Thue = 5 * TriGiaXe / 100;
}
void Vehicle::Nhap() {
	cout << "NHAP THONG TIN XE:\n";
	cout << "Chu xe: ";
	getline(cin, ChuXe);
	cout << "Loai xe: ";
	getline(cin, LoaiXe);
	cout << "Tri gia xe: ";
	cin >> TriGiaXe;
	while (TriGiaXe < 0) {
		cout << "Tri gia >= 0:\nTri gia xe: ";
		cin >> TriGiaXe;
	}
	cout << "Dung tich: ";
	cin >> DungTich;
	while (DungTich < 0) {
		cout << "Dung tich >= 0:\nDung tich xe: ";
		cin >> DungTich;
	}
}
void Vehicle::Xuat() {
	cout << ChuXe << '\t' << LoaiXe << "\t" << TriGiaXe << "\t" << DungTich << "\t" << Thue << endl;
}
void XuatMang(Vehicle* a) {
	
}