// Задача 1
#include <stdio.h>
#include <math.h>
#include <locale.h> // Указание библиотек
int main() {
	setlocale(LC_ALL, "Rus");
	int k, m, i; // Указание типа данных переменных
	scanf("%d", &k); // Ввод значения переменной пользователем
	for (int i = 1; i <= 10; i++)
	{
		m = k * i / 10;
		printf("%d\n", m); // Циклс вычислением и выводом
	}
	return 0;
}
