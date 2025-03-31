#include "Day.h"

Day::Day() {
	ngay = 1;
	thang = 1;
	nam = 0;
}
Day::Day(int a = 1, int b = 1, int c = 0) {
	ngay = a;
	thang = b;
	nam = c;
	correct();
}
void Day::Xuat() {
	cout << ngay << "/" << thang << "/" << nam << endl;
}
void Day::Nhap() {
	while (1) {
		thang = 1;
		nam = 4;
		cout << "ngay: ";
		cin >> ngay;
		if (!KiemTra()) {
			cout << "Ngay khong hop le, nhap lai\n";
			ngay = 1;
			continue;
		}
		cout << "thang: ";
		cin >> thang;
		if (!KiemTra()) {
			cout << "Thang khong hop le, nhap lai\n";
			thang = 1;
			continue;
		}
		cout << "nam: ";
		cin >> nam;
		if (!KiemTra()) {
			cout << "Ngay khong hop le, nhap lai\n";
			continue;
		}
		else break;
	}
}

bool Day::KiemTra() {
	if (ngay <= 0 || ngay > 31 || thang <= 0 || thang > 12) return 0;
	switch (thang)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		return (ngay <= 31);
	case 4: case 6: case 9: case 11:
		return (ngay <= 30);
	case 2:
		if (NamNhuan()) return (ngay <= 29);
		else return (ngay <= 28);
	default:
		return 0;
	}

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
Day Day::AddNgay(int a) {
	ngay += a;
	correct();
	return *this;
}
Day Day::AddThang(int a) {
	thang += a;
	correct();
	return *this;
}
Day Day::AddNam(int a) {
	nam += a;
	correct();
	return *this;
}
string Day::GetThu() {
	int q = ngay;
	int m = (thang >= 3) ? thang : thang + 12;
	int K = nam % 100;
	int J = nam / 100;
	int thu = (q + (13 * (m + 1) / 5) + K + K / 4 + J / 4 - 2 * J) % 7;
	string Thu[7] = { "Thu bay","Chu nhat","Thu hai", "Thu ba", "Thu tu","Thu nam","Thu sau" };
	return Thu[thu];
}
Day Day::TakeNam(int a) {
	return AddNam(-a);
}
Day Day::TakeThang(int a) {
	return AddThang(-a);
}
Day Day::TakeNgay(int a) {
	return AddNgay(-a);
}