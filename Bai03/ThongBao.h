#pragma once
#include "SoPhuc.h"
class ThongBao
{
public:
	static void PhepTinhSoPhuc(SoPhuc A, char a, SoPhuc B) {
		if (a == '+' || a == '-' || a == '*' || a == '/') {
			A.Xuat();
			cout << " " << a << " ";
			B.Xuat();
			cout << " = ";
			if (a == '+') {
				A.cong(B).Xuat();
			}
			else if (a == '-') {
				A.tru(B).Xuat();
			}
			else if (a == '*') {
				A.nhan(B).Xuat();
			}
			else if (a == '/') {
				A.chia(B).Xuat();
			}
			cout << endl;
		}
		else cout << "Phep tinh khong hop le!\n";

	}
};

