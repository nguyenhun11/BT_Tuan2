#include "SoPhuc.h"
#include "ThongBao.h"
int main() {
	SoPhuc A, B;
	cout << "Nhap 2 so phuc: \n";
	A.Nhap();
	B.Nhap();
	ThongBao::PhepTinhSoPhuc(A, '+', B);
	ThongBao::PhepTinhSoPhuc(A, '-', B);
	ThongBao::PhepTinhSoPhuc(A, '*', B);
	ThongBao::PhepTinhSoPhuc(A, '/', B);
}