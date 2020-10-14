// Задача 5
#include <stdio.h>
#include <math.h>
#include <locale.h> // Указание библиотек
int main() {
	setlocale(LC_ALL, "Rus");
	float A, c, s;
	int N, i; // Указание типов данных переменных 
	scanf("%f", &A);
	scanf("%d", &N); // Ввод значений переменных пользователем
	for (i = 0; i <= N; i++)
	{
		c = pow(-1, i) * pow(A, i);
		s = s + c; // Тело цикла
	}
	printf("Значение выражения = %f", s); // Вывод результатана экран
	return 0;
}
