#include "ArrPhanSo.h"
ArrPhanSo::ArrPhanSo() {
	arr = nullptr;
	size = 0;
}
void ArrPhanSo::Nhap() {
	cout << "size: ";
	cin >> size;
	arr = new PhanSo[size];
	for (int i = 0; i < size; i++) {
		arr[i].NhapPhanSo();
	}
	cout << "Nhap xong\n";
}
void ArrPhanSo::Xuat() {
	for (int i = 0; i < size; i++) {
		arr[i].XuatPhanSo();
		cout << " ";
	}
	cout << endl;
}
PhanSo ArrPhanSo::max() {
	PhanSo max = arr[0];
	for (int i = 1; i < size; i++) {
		if (max.Giatri() < arr[i].Giatri()) {
			max = arr[i];
		}
	}
	return max;
}
bool isPrime(int n) {
	int a = sqrt(n);
	for (int i = 2; i <= a; i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}
int ArrPhanSo::CountTuIsPrime() {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (isPrime(arr[i].getTu())) count++;
	}
	return count;
}
void ArrPhanSo::sort() {
	int n = size;
	while (n--) {
		for (int i = 0; i < n; i++) {
			if (arr[i].Giatri() > arr[i + 1].Giatri()) {
				PhanSo temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
}
void ArrPhanSo::randomArrPhanSo(int n) {
	size = n;
	srand(time(0));
	arr = new PhanSo[n];
	for (int i = 0; i < n; i++) {
		arr[i].setTu(rand() % 100);
		do arr[i].setMau(rand() % 100);
		while (arr[i].getMau() == 0);
	}

}