// Задача 1
#include <stdio.h>
#include <math.h>
#include <locale.h> // Указание библиотек
int main() {
	setlocale(LC_ALL, "Rus");
	float a, r; // Указание типа данных переменных
	scanf("%f", &a); // Ввод значений переменных пользователем
	r = a / 180; // Вычисление радианов
	printf("Значение угла в радианах = %f", r); // Вывод результата на экран
	return 0;
}
