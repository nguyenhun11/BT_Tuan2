//Ngày, tháng năm, nhập xuất thiết lập thay đổi, lấy thứ, kiểm tra năm nhuận
#include "Day.h"
int main() {
	Day A(32, 1, 2025);
	A.Xuat();
	A = Day(29, 2, 2020);
	A.Xuat();
	A.SetNam(2021);
	A.Xuat();
	cout << "cong 32 ngay\n";
	A.AddNgay(32).Xuat();
	A.Nhap();
	A.Xuat();
	cout << A.GetThu() << endl;
	cout << "tru di 32 ngay\n";
	A.TakeNgay(32);
	A.Xuat();
	
}
