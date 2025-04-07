//Mã số sinh viên: 24520604
//Họ và tên: Nguyễn Gia Hưng
//Ngày sinh: 11/01/2006
//Lớp: IT002.P26.2

#include "Day.h"

Day::Day() {
	ngay = 1;
	thang = 1;
	nam = 1;
}
Day::Day(int a = 1, int b = 1, int c = 1) {
	ngay = a;
	thang = b;
	nam = c;
	correct();
}
int Day::DayInMonth(int thang, int nam) {
	static int ngayTrongThang[] = { 31, 28, 31, 30, 31, 30,
									 31, 31, 30, 31, 30, 31 };//static để không phải cấp phát nhiều lần cho mỗi lần gọi
	if (thang == 2 && ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0)))
		return 29;
	return ngayTrongThang[thang - 1];
}
bool Day::KiemTra() {
	if (ngay <= 0 || ngay > 31 || thang <= 0 || thang > 12) return 0;
	return (ngay <= DayInMonth(thang, nam));
}
bool Day::NamNhuan() {
	if (nam % 100 == 0) {
		return (nam % 400 == 0);
	}
	else return (nam % 4 == 0);
}
void Day::correct() {
	while (!KiemTra()) {
		if (ngay <= 0) {
			thang--;
			if (thang <= 0) {
				thang = 12;
				nam--;
			}
			switch (thang) {
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				ngay += 31; break;
			case 4: case 6: case 9: case 11:
				ngay += 30; break;
			case 2:
				ngay += (NamNhuan() ? 29 : 28); break;
			}
		}

		int daysInMonth;
		switch (thang) {
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			daysInMonth = 31; break;
		case 4: case 6: case 9: case 11:
			daysInMonth = 30; break;
		case 2:
			daysInMonth = (NamNhuan() ? 29 : 28); break;
		default:
			daysInMonth = 0; 
		}
		if (ngay > daysInMonth) {
			ngay -= daysInMonth;
			thang++;
			if (thang > 12) {
				thang = 1;
				nam++; 
			}
		}
	}
}
int Day::SoNgay() {
	//Mốc là ngày 1/1/1
	int tong = -1;
	for (int i = 1; i < nam; i++) {// Cộng số ngày trong các năm trước đó
		tong += (Day(1,1,i).NamNhuan()) ? 366 : 365;//Tạo ngày giả 1/1 để ktra năm nhuận
	}
	for (int i = 1; i < thang; i++) {// Cộng số ngày trong các tháng trước của năm hiện tại
		tong += DayInMonth(i, nam);
	}
	tong += ngay;// Cộng ngày
	return tong;
}
int Day::GetNgay() {
	return ngay;
}
int Day::GetThang() {
	return thang;
}
int Day::GetNam() {
	return nam;
}
void Day::SetNgay(int a) {
	ngay = a;
	correct();
}
void Day::SetThang(int a) {
	thang = a;
	correct();
}
void Day::SetNam(int a) {
	nam = a;
	correct();
}
Day Day::AddThang(int a) {
	return Day(ngay, thang + a, nam);
}
Day Day::AddNam(int a) {
	return Day(ngay, thang, nam + a);
}
string Day::GetThu() {
	// 1/1/1 la thu hai
	int thu = SoNgay() % 7;
	string Thu[7] = {"Thu hai","Thu ba", "Thu tu","Thu nam","Thu sau", "Thu bay","Chu nhat"};
	return Thu[thu];
}
Day Day::TakeNam(int a) {
	return Day(ngay, thang, nam - a);
}
Day Day::TakeThang(int a) {
	return Day(ngay, thang - a, nam);
}
istream& operator>>(istream& is, Day&a) {
	while (1) {
		a.thang = 1;
		a.nam = 4;//Đảm bảo có thể nhập ngày 29/2
		cout << "ngay: ";
		is >> a.ngay;
		if (!a.KiemTra()) {
			cout << "Ngay khong hop le, nhap lai\n";
			//a.ngay = 1;
			continue;
		}
		cout << "thang: ";
		is >> a.thang;
		if (!a.KiemTra()) {
			cout << "Thang khong hop le, nhap lai\n";
			//a.thang = 1;
			continue;
		}
		cout << "nam: ";
		is >> a.nam;
		if (!a.KiemTra()) {
			cout << "Ngay khong hop le, nhap lai\n";
			continue;
		}
		else break;
	}
	return is;
}
ostream& operator<<(ostream& os, Day a) {
	os <<"(" << a.ngay << "/" << a.thang << "/" << a.nam << ") ";
	return os;
}
Day Day::operator+(int a) {
	return Day(ngay + a, thang, nam);
}
Day Day::operator-(int a) {
	return Day(ngay - a, thang, nam);
}
int Day::operator-(Day a) {
	return this->SoNgay() - a.SoNgay();
}