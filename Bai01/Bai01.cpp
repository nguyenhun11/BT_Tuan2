//Mã số sinh viên: 24520604
//Họ và tên: Nguyễn Gia Hưng
//Ngày sinh: 11/01/2006
//Lớp: IT002.P26.2


//Cài đặt lớp PhanSo để biểu diễn khái niệm phân số với hai thành phần dữ liệu tử
//số, mẫu số và các hàm thành phần cộng, trừ, nhân, chia hai phân số, các hàm
//thành phần xuất, nhập, định giá trị cho phân số.Viết chương trình cho phép
//nhập vào hai phân số, in ra kết quả các phép toán cộng, trừ, nhân, chia hai phân
//số kể trên.


#include "PhanSo.h"

int main() {
	cout << "Day la chuong trinh nhap phan so va tinh tong hieu\n";
	PhanSo a,b;
	a.NhapPhanSo();
	b.NhapPhanSo();
	cout << "\nTong = ";
	a.cong(b).XuatPhanSo();
	cout << "\nHieu = ";
	a.tru(b).XuatPhanSo();
	cout << "\nTich = ";
	a.nhan(b).XuatPhanSo();
	cout << "\nThuong = ";
	a.chia(b).XuatPhanSo();
}