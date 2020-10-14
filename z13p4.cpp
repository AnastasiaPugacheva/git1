// Задача 4
#include <stdio.h>
#include <math.h>
#include <locale.h> // Указание библиотек
int main() {
	setlocale(LC_ALL, "Rus");
	float A, c, s;
	int N, i; // Указание типов данных переменных
	scanf("%f", &A);
	scanf("%d", &N); // Ввод значений переменных пользователем 
	c = 1;
	s = 0; // Присваивание значений переменным
	for (i = 0; i <= N; i++)
	{
		c = pow(A, i);
		s = s + c; // Тело цикла
	}
	printf("Сумма = %f", s); // Вывод результата на экран
	return 0;
}
