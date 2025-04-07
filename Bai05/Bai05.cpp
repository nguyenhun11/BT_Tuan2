//Mã số sinh viên: 24520604
//Họ và tên: Nguyễn Gia Hưng
//Ngày sinh: 11/01/2006
//Lớp: IT002.P26.2
#pragma region Đề bài
//Cài đặt lớp biểu diễn khái niệm ngày tháng năm với các thành phần dữ liệu
//ngày, tháng, năm và các thao tác thích hợp(nhập, xuất, thiết lập, thay đổi
//	ngày / tháng / năm, lấy ngày / tháng / năm, tăng / giảm ngày / tháng / năm, lấy thứ trong
//	tuần, kiểm tra năm nhuận, …).Viết chương trình minh họa các chức năng đã cài
//	đặt của lớp ngày tháng năm.
#pragma endregion

#include "Day.h"
int main() {

	Day a;
	cin >> a;
	cout << a;
	a = Day(31, 2, 2025);
	cout << a; //Tự correct() ngày 31/2/2025 sang 3/3/2025
	cout << "\nNgay: " << a.GetNgay() << "\nThang: " << a.GetThang() << "\nNam: " << a.GetNam() << "\nThu: " << a.GetThu() << endl;
	cout << a + 60;
	cout << a.AddThang(14);
	cout << a - 365;
	cout << a.TakeThang(15);
	cout << "\nNhap ngay hom nay:\n";
	cin >> a;
	Day b(17, 2, 2026);
	cout << "Con " << b - a << " nua la den Tet";

}
