
#include <iostream>
using namespace std;
class PhanSo
{
	int tu;
	int mau;
	int gcd(int,int);
public:
	PhanSo();
	PhanSo(int,int);
	int getTu();
	int getMau();
	void NhapPhanSo();
	void XuatPhanSo();
	PhanSo cong(PhanSo);
	PhanSo tru(PhanSo);
	PhanSo nhan(PhanSo);
	PhanSo chia(PhanSo);
	PhanSo NghichDao();
	void RutGon();
	float Giatri();
};

