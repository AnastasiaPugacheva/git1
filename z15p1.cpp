// Задача 1
#include <stdio.h>
#include <math.h> // Указание библиотек
void PowerA3(float A, float *B) {
	 *B = pow(A, 3); // Ввод функции 
}
int main(void) {
	int i; // Указание типа данных переменной 
	for(i = 1; i <= 5; i++) {
		float A;
		scanf("%f", &A); // Ввод значения переменной пользователем
		float B;
		PowerA3(A, &B); // Использование функции
		printf("%.2f\n", B); // вывод результата на экран
	}
	return 0;
}
