// Задача 3
#include <stdio.h>
#include <math.h>
#include <locale.h> // Указание библиотек
float p = 3.14; // Указание типа данных переменной 
float RingS(float R1, float R2) { // Ввод функции
	float S1 = p * R1 * R1;
	float S2 = p * R2 * R2;
	float S3 = abs(S1 - S2); // Вычисление площади кольца
}
int main() {
	setlocale(LC_ALL, "Rus");
	float R1, R2, S3;
	for (int i = 1; i <= 3; i++) { // Создание цикла для расчета площадей трех колец
		printf("Радиусы для %d кольца = \n", i);
		scanf("%f", &R1);
		scanf("%f", &R2); // Ввод значений переменных пользователем
		S3 = RingS (R1, R2); // Использование функции
		printf("S = %f\n", S3); // вывод результата на экран
}
return 0;
}
