// Задача 4
#include <stdio.h>
#include <math.h>
#include <locale.h> // Указание библиотек
int main() {
	setlocale(LC_ALL, "Rus");
	int x, y; // Указание типа данных переменных
	scanf("%d", &x); // Ввод значения переменной пользователем
	y = 3 * x * x * x * x * x * x - 6 * x * x - 7; // Вычисление значения функции
	printf("Значение функции = %d", y); // Вывод результата на экран
	return 0;
}
