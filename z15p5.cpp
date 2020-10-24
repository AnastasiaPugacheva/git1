// Задача 5
#include <stdio.h> // Указание библиотек
float Fact(int N) { // Ввод функции
	if (N % 2 == 0) {
	int i = 2;
	float n = 1;
		do  {
			n = n * i;
			i = i + 2;
		}
		while (i <= N);
		printf("N!! = %f ", n);
		}
		else {
			int i = 1;
			float n = 1;
			do {
				n = n * i;
				i = i + 2; 
			}
			while (i <= N);
			printf("N!! = %f ", n); // Вычисление двойного факториала, в зависимости от четности числа
		}
	}
int main() {
	int N;
	float n; // Указание типа данных переменных
	scanf("%d", &N); // Ввод значения переменной функции 
	Fact(N); // Использование функции
	return 0;
}
