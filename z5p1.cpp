// https://github.com/AnastasiaPugacheva/git1
// Задача 1
#include <stdio.h>
#include <math.h>
#include <locale.h> // Описание библиотек
int main() {
	setlocale (LC_ALL, "Rus");
	float x1, y1, x2, y2, r; // Указание типа данных переменных
	scanf("%f", &x1);
	scanf("%f", &y1);
	scanf("%f", &x2);
	scanf("%f", &y2); // Ввод значений переменных пользователем 
	r = sqrt((x2 - x1) * (x2 -x1) + (y2 - y1) * (y2 - y1)); // Вычисление расстояния между двумя точками в координатах
	printf("Расстояние между двумя точками = %f", r); // Вывод результата на экран
	return 0;
}
