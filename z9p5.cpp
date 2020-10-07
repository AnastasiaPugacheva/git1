// Задача 5
#include <stdio.h>
#include <math.h>
#include <locale.h> // Указание библиотек
int main() {
	setlocale(LC_ALL, "Rus");
	int g, v; // Указание типов данных переменных
	scanf ("%d", &g); // Ввод значения переменной пользователем
	v = (g - 1) / 100 + 1; // Вычисление столетия
	printf("Номер столетия = %d", v); // Вывод результата на экран
	return 0;
}
