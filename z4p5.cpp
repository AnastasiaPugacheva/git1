// https://github.com/AnastasiaPugacheva/git1
// Задача 5
#include <stdio.h>
#include <math.h>
#include <locale.h> // Описание библиотек
int main() {
	setlocale (LC_ALL, "Rus");
	float a, b, s, r, p, ch; // Указание типа данных переменных
	scanf("%f", &a);
	scanf("%f", &b); // Ввод значений переменных пользователем 
	a = abs(a);
	b = abs(b);
	s = a + b;
	r = a - b;
	p = a * b;
	ch = a / b; // Вычисление суммы, разности, произведения и частного чисел
	printf("Сумма = %f\nРазность = %f\nПроизведение = %f\nЧастное = %f\n", s, r, p, ch ); // Вывод результатов на экран
	return 0;
}
