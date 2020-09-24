// https://github.com/AnastasiaPugacheva/git1
// Задача 1
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale (LC_ALL, "Rus");
	int A, B, c; // Указание типа данных переменных
	scanf("%d", &A);
	scanf("%d", &B); // Ввод значений переменных пользователем
	c = A;
	A = B;
	B = c; // Присваивание
	printf("Значение переменной A = %d\nЗначение переменной B = %d", A, B); //  Вывод значений переменных
	return 0;
}
