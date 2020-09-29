// Задача 2
#include <stdio.h>
#include <math.h>
#include <locale.h> // Указание библиотек
int main() {
	setlocale(LC_ALL, "Rus");
	float a, r; // Указание типа данных переменных
	scanf("%f", &r); // Ввод значения переменной пользователем
	a = r * 180; // Вычисление градусов угла 
	printf("Значение угла в градусах = %f", a); // Вывод результата на экран
	return 0;
}
