#include <iostream>
#include <ctime>

using namespace std;

int quarter(double x, double y) {
	if (x > 0 && y > 0) return 1;
	if (x < 0 && y > 0) return 2;
	if (x < 0 && y < 0) return 3;
	if (x > 0 && y < 0) return 4;
}

bool even(int k) {
	return k % 2 == 0;
}

bool isSquare(int k) {
	int i = 1;
	while (i * i < k) {
		i++;
	}
	return i * i == k;
}

bool isPower5(int k) {
	int i = 1;
	while (i < k) {
		i *= 5;
	}
	return i == k;
}

int main() {
	setlocale(LC_ALL, "rus");
	srand(time(nullptr));
	/*Proc23.Описать функцию quarter(x, y) целого типа, определяющую номер координатной четверти,
	в которой находится точка с ненулевыми вещественными координатами(x, y).С помощью этой функции найти номера
	координатных четвертей для трех точек с данными ненулевыми координатами.*/

	/*double x, y;
	for (int i = 1; i <= 3; i++) {
		x = (rand() % 32001 - 16000) / 1000.0;
		y = (rand() % 32001 - 16000) / 1000.0;
		cout << x << ' ' << y << " - находится в четверти - "  << quarter(x, y) << endl;
	}*/



	/*Proc24.Описать функцию even(K) логического типа, возвращающую TRUE,
	если целый параметр K является четным, и FALSE в противном случае.С
	ее помощью найти количество четных чисел в наборе из 10 целых чисел*/

	/*for (int i = 1; i <= 10; i++) {
		int x = rand();
		cout << x << ' ' << boolalpha << even(x) << endl;
	}*/



	/*Proc25◦.Описать функцию isSquare(K) логического типа, возвращающую TRUE,
	если целый параметр k(> 0) является квадратом некоторого целого числа, и FALSE в противном случае.
	С ее помощью найти количество квадратов в наборе из 10 целых положительных чисел*/

	/*int x, k = 0;
	for (int i = 0; i <= 10; i++) {
		x = rand() % 9 + 1;
		cout << x << ' ';
		if (isSquare(x)) {
			k++;
		}
	}
	cout << endl << k << endl;*/



	/*Proc26.Описать функцию IsPower5(K) логического типа, возвращающую TRUE, если целый параметр K(> 0) является степенью числа 5,
	и FALSE в противном случае.С ее помощью найти количество степеней числа 5 в наборе из 10 целых положительных чисел.*/

	int x, k = 0;
	for (int i = 0; i <= 10; i++) {
		x = rand() % 5 + 1;
		cout << x << ' ';
		if (isPower5(x)) {
			k++;
		}
	}
	cout << endl << k << endl;









	return 0;
}