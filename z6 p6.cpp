// Задача 6
#include <stdio.h>
#include <math.h>
#include <locale.h> // Указание библиотек 
int main() {
	setlocale(LC_ALL, "Rus");
	int A, p; // Указание типа данных перемненных
	scanf ("%d", &A); // Ввод значения переменной пользователем 
	p = A * A; // А во 2 степени
	A = p * p; // А в 4 степенеи 
	p = A * A; // А в 8 степени
	printf("Число А в 8 степени = %d", p); // Вывод результата на экран
	return 0;
}
