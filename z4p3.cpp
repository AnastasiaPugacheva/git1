//  https://github.com/AnastasiaPugacheva/git1
// Задача 3
#include <stdio.h>
#include <math.h>
#include <locale.h> // Описание библиотек
int main() {
setlocale(LC_ALL, "Rus");
float a, b, c; // Указание типа данных переменных
scanf("%f", &a);
scanf("%f", &b); // Ввод значений переменных
c = (a + b) / 2; // Вычисление среднего арифметического
printf("Среднее арифметическое = %f", c); // Вывод результата на экран
return 0;
}
