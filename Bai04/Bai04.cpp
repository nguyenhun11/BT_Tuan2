//Thời gian: giờ, phút, giây, nhập, xuất, thiết lập, thay đổi giờ, phút giay, lấy, tăng giảm
#include "ThoiGian.h"
int main() {
	cout << "Chuong trinh nhap thoi gian\n";
	ThoiGian A(1.5);
	A.Add(ThoiGian(2)).Xuat();
	A.Tru(ThoiGian(1.5)).Xuat();
	A.Nhap();
	A.Xuat();

}