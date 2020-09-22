// https://github.com/AnastasiaPugacheva/git1
// Задача 2
#include <stdio.h>
#include <math.h>
#include <locale.h> // Описание библиотек
int main() {
setlocale(LC_ALL, "Rus");
float const p = 3.14; // Обозначение константы
short int d;
float L;  // Указание типа данных переменных
scanf("%d", &d); // Ввод значений переменных
L = p * d;  // Вычисление длины окружности
printf("Длина окружности = %f", L);  // Вывод результата на экран
return 0;
}
