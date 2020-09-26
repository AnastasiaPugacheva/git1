// Задача 5
#include <stdio.h>
#include <math.h>
#include <locale.h> // Указание библиотек
int main() {
	setlocale(LC_ALL, "Rus");
	int x, y; // Указание типа данных переменных
	scanf("%d", &x); // Ввод данных пользователем 
	y = 4 * (x - 3) * (x - 3) * (x - 3) * (x - 3) * (x - 3) * (x - 3) - 7 * (x - 3) * (x - 3) * (x - 3) + 2; // Вычисление функции
	printf("Значение y = %d", y); // вывод результата на экран
	return 0;
}
