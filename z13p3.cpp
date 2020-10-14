// Задача 3
#include <stdio.h>
#include <math.h>
#include <locale.h> //Указание библиотек
int main() {
	setlocale(LC_ALL, "Rus");
	int N, i, k; // Указание типов данных переменных
	scanf("%d", &N); // Ввод значения переменной пользователем
	k = 0; 
	for (i = 1; i <= 2 * N - 1; i+=2)
	{
		k = k + i;
		printf("%d\n", k); // Тело цикла
	}
	return 0;
}
