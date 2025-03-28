//Ngày, tháng năm, nhập xuất thiết lập thay đổi, lấy thứ, kiểm tra năm nhuận
#include "Day.h"
int main() {
	Day A(-2, 2, 19);
	A.Xuat();
	A = Day(29, 2, 2020);
	A.Xuat();
	A.SetNam(2021);
	A.Xuat();
	A.AddNgay(32).Xuat();
	A.Nhap();
	cout << A.GetThu() << endl;
	A.TakeNgay(32);
	A.Xuat();
	
}
