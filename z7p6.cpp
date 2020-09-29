// Задача 6
#include <stdio.h>
#include <math.h>
#include <locale.h> // Указание библиотек
int main() {
	setlocale(LC_ALL, "Rus");
	float A1, B1, C1, A2, B2, C2, x, y, d, d1, d2; // Указание типа данных переменных
	scanf("%f", &A1);
	scanf("%f", &B1);
	scanf("%f", &C1);
	scanf("%f", &A2);
	scanf("%f", &B2);
	scanf("%f", &C2); // Ввод значений переменных пользователем
	d = A1 * B2 - A2 * B1;
	d1 = C1 * B2 - B1 * C2;
	d2 = A1 * C2 - C1 * A2; // Вычисление определителей 
	if ((d == 0) && (d1 != 0) && (d2 != 0)) 
	{
	printf("Система не имеет решений");
    }
	if ((d == 0) && (d1 == 0) && (d2 == 0)) 
	{
	printf("Система неопределенна");
    }
	if (d != 0)
    {
	x = d1 / d;
	y = d2 / d;
	printf ("X = %f\nY = %f", x, y); // Вывод ответов в зависимости от условий
    }
return 0;
}
