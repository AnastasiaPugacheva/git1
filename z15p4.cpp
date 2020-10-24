// Задача 4
#include <stdio.h>
#include <locale.h> // УКазание библиотек
int Quarter(int x, int y) { // Ввод функции
	int p = 0;
	if ((x > 0) && (y > 0)) {
		p = 1;
		printf("%d четверть\n", p);
	}
	if ((x > 0) && (y < 0)) {
		p = 2;
		printf("%d четверть\n", p);
	}
	if ((x < 0) && (y > 0)) {
		p = 3;
		printf("%d четверть\n", p);
	}
	if ((x < 0) && (y < 0)) {
		p = 4;
		printf("%d четверть\n", p); // Условия для проверки координатной четверти
	}
}
int main() {
	setlocale(LC_ALL, "Rus");
	int x, y, p = 0, i; // Указание типа данных переменных
	for (i = 1; i < 4; i++) {
		scanf("%d", &x);
		scanf("%d", &y); // Ввод значений переменных пользователем
		Quarter (x, y); // Использование функции
	}
	return 0;
}
	
