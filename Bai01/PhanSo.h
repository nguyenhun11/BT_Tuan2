//Mã số sinh viên: 24520604
//Họ và tên: Nguyễn Gia Hưng
//Ngày sinh: 11/01/2006
//Lớp: IT002.P26.2

#include <iostream>
using namespace std;
class PhanSo
{
	int tu;
	int mau;
	int gcd(int,int);
public:
	PhanSo();
	PhanSo(int);
	PhanSo(int,int);
	int getTu();
	int getMau();	
	void RutGon();
	float Giatri();
	PhanSo operator+(PhanSo);
	PhanSo operator-(PhanSo);
	PhanSo operator*(PhanSo);
	PhanSo operator/(PhanSo);
	friend istream& operator>>(istream& is, PhanSo&);
	friend ostream& operator<<(ostream& os, const PhanSo);
	/*void NhapPhanSo();
	void XuatPhanSo();
	PhanSo cong(PhanSo);
	PhanSo tru(PhanSo);
	PhanSo nhan(PhanSo);
	PhanSo chia(PhanSo);*/
	//PhanSo NghichDao();
};

