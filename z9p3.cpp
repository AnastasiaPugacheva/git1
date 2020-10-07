// Задача 3
#include <stdio.h>
#include <math.h>
#include <locale.h> // Указание библиотек
int main() {
	setlocale(LC_ALL, "Rus");
	int N, K, d; // Указание типов данных переменных 
	scanf("%d", &K);
	scanf("%d", &N); // Ввод значений переменных пользователем
	d = (K + N - 2) % 7 + 1; // Вычисление дня недели
	printf("%d", d); // Вывод результата на экран
	return 0;
}
