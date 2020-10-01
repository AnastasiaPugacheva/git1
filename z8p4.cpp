// Задача 4
#include <stdio.h>
#include <math.h>
#include <locale.h> // Указание библиотек
int main() {
	setlocale(LC_ALL, "Rus");
	int d, b, a; // Указание типа данных переменных
	scanf("%d", &d); // Ввод значения переменной пользователем 
	a = d / 10;
	b = d % 10;
	d = b * 10 + a; // Перестановка цифр числа
	printf("Новое число = %d", d); // Вывод результата на экран
	return 0;
}
