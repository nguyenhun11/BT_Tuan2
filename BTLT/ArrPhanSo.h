#pragma once
#include <iostream>
#include "cPhanSo.h"
#include <ctime>

class ArrPhanSo
{
	PhanSo* arr;
	int size;
public:
	ArrPhanSo();
	void randomArrPhanSo(int);
	void Nhap();
	void Xuat();
	PhanSo max();
	int CountTuIsPrime();
	void sort();

};

