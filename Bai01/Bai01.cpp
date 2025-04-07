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
	cout << "Day la chuong trinh nhap phan so va tinh cong tru nhan chia\n";
	PhanSo a, b;
	cin >> a; 
	cin >> b; //Nhập Phân số
	cout << a << " + " << b << " = " << a + b << endl; //Cộng
	cout << a << " - " << b << " = " << a - b << endl; //Trừ
	cout << a << " * " << b << " = " << a * b << endl; //Nhân
	cout << a << " : " << b << " = " << a / b << endl; //Chia
	cout << a << " + " << "10 = " << a + 10 << endl; //Cộng với số nguyên

}