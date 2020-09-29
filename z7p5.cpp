// Задача 5
#include <stdio.h>
#include <math.h>
#include <locale.h> // Указание библиотек
int main() {
	setlocale(LC_ALL, "Rus");
	float A, B, x; // Указание типа данных переменных
	scanf("%f", &A);
	scanf("%f", &B); // Ввод значений переменных пользователем
	x = - B / A; // Решение уравнения
	printf("Х = %f", x); // Вывод результата на экран
	return 0;
}
