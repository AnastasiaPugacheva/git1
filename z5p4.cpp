// https://github.com/AnastasiaPugacheva/git1
// Задача 4
#include <stdio.h>
#include <math.h>
#include <locale.h> // Описание библиотек
int main() {
	setlocale (LC_ALL, "Rus");
	float x1, y1, x2, y2, d1, d2, p, s; // Указание типа данных переменных
	scanf("%f", &x1);
	scanf("%f", &y1);
	scanf("%f", &x2);
	scanf("%f", &y2); // Ввод значений переменных пользователем
	d1 = sqrt((y2 - y1) * (y2 - y1));
	d2 = sqrt((x2 - x1) * (x2 - x1));
	p = 2 * (d1 + d2);
	s = d1 * d2; // Вычисление периметра и площади 
	printf("Периметр прямоугольника = %f\nПлощадь прямоугольника = %f", p, s); // Вывод результата на экран
	return 0;
}
