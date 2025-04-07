//Mã số sinh viên: 24520604
//Họ và tên: Nguyễn Gia Hưng
//Ngày sinh: 11/01/2006
//Lớp: IT002.P26.2
//Cài đặt String biểu diễn chuỗi ký tự, thiết lập, hủy bỏ, chiều dài, nối chuỗi, đảo chuỗi, chuyển chuỗi hoa/thường, nhập xuất chuỗi
#include "myString.h"
int main() {
	cout << "Chuong trinh nhap chuoi \n";
	cString s,l; //khoi tao
	cout << "Nhap ten: ";
	cString::cinstr(s, 100); //nhap
	cout << s.strlen() << endl;
	l = s; //gán l
	cout << l;
	l = cString("Xin chao "); //ép kiểu char* sang cString
	cout << l;
	cout << cString::strcat(l, s);
	cString k = l; //copy constructor
	cout << k;
	cString c = cString::strcat(l, s);
	c.strrev();
	cout << c;
	c.strrev();
	c.strupp();
	cout << c;
	c.strlow();
	cout << c;

}