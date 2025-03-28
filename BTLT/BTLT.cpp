#include "ArrPhanSo.h"

int main() {
	ArrPhanSo arr;
	arr.randomArrPhanSo(100);
	arr.Xuat();
	cout << "\nSap xep:\n";
	arr.sort();
	arr.Xuat();
}