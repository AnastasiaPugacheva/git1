// Задача 4
#include <stdio.h>
#include <math.h>
#include <locale.h> // Указание библиотек
int main() {
	setlocale(LC_ALL, "Rus");
	int x, y; // Указание типа данных переменных
	scanf("%d", &x);
	scanf("%d", &y); // Ввод значений переменных пользователем
	if (x > 0) {
		if (y > 0) {
			printf("Первая четверть");
		}
		else {
			printf("Вторая четверть");
		}
	}
	else {
		if (y < 0) {
			printf("Третья четверть");
		}
		else {
			printf("Четвертая четверть"); // Вывод результата на экран в зависимости от выполнения условий 
		}
	}
	return 0;
}
