// https://github.com/AnastasiaPugacheva/git1
// Задача 3
#include <stdio.h>
#include <math.h>
#include <locale.h> // Описание библиотек
int main() {
	setlocale (LC_ALL, "Rus");
	int A, B, C, o1, o2, p; // Указание типа данных переменных
	scanf("%d", &A); 
	scanf("%d", &B);
	scanf("%d", &C); // Ввод значений переменных пользователем
	o1 = abs(C - A);
	o2 = abs(C - B);
	p = o1 * o2; // Вычисление произведения длин заданных отрезков
	printf("Произведение длин отрезков AC и BC = %d", p); // Вывод результата на экран
	return 0;
}
