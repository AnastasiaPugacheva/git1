// Задача 2
#include <stdio.h>
#include <math.h>
#include <locale.h> // Указание библиотек
int main() {
	setlocale(LC_ALL, "rus");
	float N, p = 1, i;// Указание типа данных переменных
	scanf("%f", &N); // Ввод значения переменной пользователем
	for (i = 1; i <= N; i++)
	{
		p = p * (1 + i / 10); // Вычисление произведения в цикле
	}
	printf("%f", p); // Вывод результата на экран
	return 0;
}
