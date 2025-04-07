//Mã số sinh viên: 24520604
//Họ và tên: Nguyễn Gia Hưng
//Ngày sinh: 11/01/2006
//Lớp: IT002.P26.2
//
#include "SoPhuc.h"

#pragma region Đề bài
////Cài đặt lớp biểu diễn khái niệm số phức với hai thành phần dữ liệu thực, ảo và
//các hàm thành phần xuất, nhập, định giá trị cho số phức, cộng, trừ, nhân, chia
//hai số phức.Viết chương trình cho phép nhập vào hai số phức, in ra kết quả các
//phép toán cộng, trừ, nhân, chia hai số phức kể trên.
//
#pragma endregion



int main() {
	SoPhuc a, b;
	cout << "Nhap 2 so phuc: \n";
	cin >> a >> b;
	cout << a << " " << b << endl;
	cout << a << " + " << b << " = " << a + b << endl;
	cout << a << " - " << b << " = " << a - b << endl;
	cout << a << " * " << b << " = " << a * b << endl;
	cout << a << " / " << b << " = " << a / b << endl;
	cout << a + 5 << a -10 << a*2 << a/3;
}