// https://github.com/AnastasiaPugacheva/git1
// Задача 2
#include <stdio.h>
#include <math.h>
#include <locale.h> // Описание библиотек
int main() {
	setlocale (LC_ALL, "Rus");
	int A, B, C, r1, r2, r3; // Указание типа данных переменных
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C); // Ввод значений переменных пользователем 
	r1 = abs(C - A);
	r2 = abs(C - B);
	r3 = r1 + r2; // Вычисление длин отрезков и их суммы 
	printf("Длина отрезка АС = %d\nДлина отрезка BC = %d\nСумма длин отрезков AC и BC = %d", r1, r2, r3); //Вывод результатов на экран
	return 0;
}
