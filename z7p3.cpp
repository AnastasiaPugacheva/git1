// Задача 3
#include <stdio.h>
#include <math.h>
#include <locale.h> // Указание библиотек
int main() {
	setlocale(LC_ALL, "Rus");
	int x, A, y, s1, s2; // Указание типа данных переменных
	scanf("%d", &x); 
	scanf("%d", &A);
	scanf("%d", &y); // Ввод значения переменной пользователем
	s1 = A / x;
	s2 = s1 * y;  // Вычисление стоимости конфет
	printf("Один килограмм конфет стоит %d\n%d килограмм конфет стоит %d", s1, y, s2); // Вывод результата на экран
	return 0;
}
