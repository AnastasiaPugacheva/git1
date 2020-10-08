// Задача 2
#include <stdio.h>
#include <math.h>
#include <locale.h> // Указание библиотек
int main() {
	setlocale(LC_ALL, "Rus");
	int a, b, c, s; // Указание типа данных переменных
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c); // Ввод значений переменных пользователем
	if (a > b) {
		if (b > c) {
			s = a + b;
		}
		else {
			s = a + c;
		}
	}
	else {
		if (a > c) {
			s = b + a;
		}
		else {
			s = b + c;  // Нахождение суммы двух наибольших чисел
		}
	}
	printf ("Сумма двух наибольших чисел = %d", s); // Вывод результата на экран
	return 0;
}
