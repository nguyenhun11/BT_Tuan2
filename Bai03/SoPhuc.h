#pragma once
#include<iostream>
using namespace std;
class SoPhuc
{
	float re;
	float im;
public:
	SoPhuc();
	SoPhuc(float, float);
	void Nhap();
	void Xuat();
	SoPhuc cong(SoPhuc);
	SoPhuc tru(SoPhuc);
	SoPhuc nhan(SoPhuc);
	SoPhuc nhan(float);
	SoPhuc chia(SoPhuc);
	SoPhuc chia(float);
};

