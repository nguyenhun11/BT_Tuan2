//Mã số sinh viên: 24520604
//Họ và tên: Nguyễn Gia Hưng
//Ngày sinh: 11/01/2006
//Lớp: IT002.P26.2
#include "Vehicle.h"
Vehicle::Vehicle() {
	ChuXe = "Chua nhap";
	LoaiXe = "Chua nhap";
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
istream& operator>>(istream& is, Vehicle& a) {
	cout << "NHAP THONG TIN XE:\n";
	cout << "Chu xe: ";
	getline(cin, a.ChuXe);
	cout << "Loai xe: ";
	getline(cin, a.LoaiXe);
	cout << "Tri gia xe: ";
	is >> a.TriGiaXe;
	while (a.TriGiaXe < 0) {
		cout << "Tri gia >= 0:\nTri gia xe: ";
		is >> a.TriGiaXe;
	}
	cout << "Dung tich: ";
	is >> a.DungTich;
	while (a.DungTich < 0) {
		cout << "Dung tich >= 0:\nDung tich xe: ";
		is >> a.DungTich;
	}
	a.TinhThue();
	return is;
}
ostream& operator<<(ostream& os, Vehicle a) {
	os << "\nTHONG TIN XE\nChu xe: " << a.ChuXe;
	os << "\nLoai xe: " << a.LoaiXe;
	os << "\nTri gia xe: " << a.TriGiaXe;
	os << "\nDung tich: " << a.DungTich;
	os << "\nThue truoc ba: " << a.Thue << endl;
	return os;
}
void Vehicle::XuatNgang() {
	cout << left
		<< setw(20) << ChuXe
		<< setw(15) << LoaiXe
		<< setw(15) << TriGiaXe
		<< setw(15) << DungTich
		<< setw(15) << Thue
		<< endl;
}
ListVehicle::ListVehicle() {
	Head = nullptr;
	Tail = nullptr;
	size = 0;
}
ListVehicle::~ListVehicle() {
	NodeVehicle* current = Head;
	while (current != nullptr) {
		NodeVehicle* temp = current;
		current = current->next;
		delete temp;
	}
	Head = nullptr;
}
void ListVehicle::addVehicle(Vehicle a) {
	NodeVehicle* newNode = new NodeVehicle();
	newNode->xe = a;
	if (Head == nullptr) {
		Head = newNode;
		Tail = Head;
	}
	else {
		Tail->next = newNode;
		Tail = newNode;
	}
	size++;
}
void ListVehicle::XuatDanhSach() {
	cout << "\nBANG KE KHAI THONG TIN CHI TIET";
	cout << "\n" << left
		<< setw(20) << "Chu Xe"
		<< setw(15) << "Loai Xe"
		<< setw(15) << "Tri Gia Xe"
		<< setw(15) << "Dung Tich"
		<< setw(15) << "Thue"
		<< "\n";

	// In dòng phân cách
	cout << setfill('-') << setw(80) << "-" << setfill(' ') << endl;

	NodeVehicle* current = Head;
	while (current != nullptr) {
		current->xe.XuatNgang();
		current = current->next;
	}
}