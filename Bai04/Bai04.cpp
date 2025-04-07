
//Mã số sinh viên: 24520604
//Họ và tên: Nguyễn Gia Hưng
//Ngày sinh: 11/01/2006
//Lớp: IT002.P26.2

#pragma region Đề bài
//Cài đặt lớp biểu diễn khái niệm thời gian với các thành phần dữ liệu giờ, phút,
//giây và các thao tác thích hợp(nhập, xuất, thiết lập, thay đổi giờ / phút / giây, lấy
//	giờ / phút / giây, tăng / giảm giờ / phút / giây, …).Viết chương trình minh họa các chức
//	năng đã cài đặt của lớp Thời gian.
#pragma endregion


#include "ThoiGian.h"
int main() {
	cout << "Chuong trinh nhap thoi gian\n";
	ThoiGian a(1.5);//Chuyển kiểu từ double sang thời gian
	cout << a;
	cout << a + 1.25;
	cout << a + ThoiGian(1, 2, 3);
	cout << a - 0.25;
	cout << a * 10;
	cin >> a;
	cout << a;

}