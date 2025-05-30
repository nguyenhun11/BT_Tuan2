﻿//Mã số sinh viên: 24520604
//Họ và tên: Nguyễn Gia Hưng
//Ngày sinh: 11/01/2006
//Lớp: IT002.P26.2
//


#pragma region Đề bài
//Cài đặt lớp biểu diễn khái niệm điểm trong mặt phẳng với hai thành phần dữ liệu
//hoành độ và tung độ với các phương thức thiết lập, các hàm thành phần cho
//phép thay đổi nội dung của điểm, lấy hoành độ, tung độ, thay đổi hoành độ, tung
//độ, tịnh tiến, nhập, xuất một điểm.Viết chương trình minh họa các chức năng đã
//cài đặt được.Tìm hiểu các hàm vẽ điểm trong chế độ đồ họa(yêu cầu tìm hiểu
//	thêm không bắt buộc)
#pragma endregion

#include "Point.h"

int main() {
	cout << "Chuong trinh nhap diem trong mat phang\n";
	Point A;
	cout << A << endl; //Khởi tạo
	A.setX(3);
	A.setY(4);
	cout << A << endl; //Điều chỉnh giá trị
	A.setPoint(4, 5);
	cout << A << endl; //Điều chỉnh giá trị
	cout << "A co x = " << A.getX() << ", y = " << A.getY(); //Hàm get
	cout << "\nNhap diem moi:\n";
	cin >> A;
	cout << A << endl; //Điểm đã nhập
	A.TinhTien(4, 5);
	

	return 0;
}

