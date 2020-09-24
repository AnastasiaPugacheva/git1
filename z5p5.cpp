// https://github.com/AnastasiaPugacheva/git1
// Задача 4
#include <stdio.h>
#include <math.h>
#include <locale.h> // Описание библиотек
int main() {
	setlocale (LC_ALL, "Rus");
	float x1, y1, x2, y2, x3, y3, d1, d2, d3, p, s; // Указание типа данных переменных
	scanf("%f", &x1);
	scanf("%f", &y1);
	scanf("%f", &x2);
	scanf("%f", &y2);
	scanf("%f", &x3);
	scanf("%f", &y3); // Ввод значений переменных пользователем 
	d1 = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	d2 = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	d3 = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	p = (d1 + d2 + d3);
	s = sqrt(p / 2 * (p / 2 - d1) * (p / 2 - d2) * (p / 2 -d3)); // Вычисление периметра и площади треугольника
	printf("Периметр треугольника = %f\nПлощадь треугольника = %f", p, s); //Выводрезультата на экран
	return 0;
}
