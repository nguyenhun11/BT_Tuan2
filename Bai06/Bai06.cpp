//Cài đặt String biểu diễn chuỗi ký tự, thiết lập, hủy bỏ, chiều dài, nối chuỗi, đảo chuỗi, chuyển chuỗi hoa/thường, nhập xuất chuỗi
#include "myString.h"
int main() {
	myString s,l; //khoi tao
	myString::cinstr(s, 100); //nhap
	cout << s.strlen() << endl;
	l = s; //myString& operator=(const myString& other);
	l.coutstr();
	l = myString("Xin chao "); //myString(const char*);
	l.coutstr();
	myString::strcat(l, s).coutstr();
	myString k = l; //copy constructor
	k.coutstr();
	myString c = myString::strcat(l, s);
	c.coutstr();
	c.strrev();
	c.coutstr();
	c.strrev();
	c.strupp();
	c.coutstr();
	c.strlow();
	c.coutstr();

}