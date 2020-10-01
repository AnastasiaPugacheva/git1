// Задача 3
#include <stdio.h>
#include <math.h>
#include <locale.h> // Указание библиотек
int main() {
	setlocale(LC_ALL, "Rus");
	int A, B, k, l; // Указание типа данных переменных
	scanf("%d", &A);
	scanf("%d", &B); // ввод значений переменных пользователем
	k = A / B;
	l = A - k * B; // Вычисление незанятой части отрезка А
	printf("Длина незанятой части отрезка А = %d", l); // Вывод результата на экран
	return 0;
}
