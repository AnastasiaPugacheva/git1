// https://github.com/AnastasiaPugacheva/git1
#include <stdio.h>
#include <math.h> // Описание библиотек
    int main() {
    int a, b, s, p; // Указание типа данных переменных
	scanf("%d", &a);
	scanf("%d", &b); // Ввод значений переменных
	s = a * b; 
	p = 2 * (a + b); // Рушкние алгебраического выражения
	printf("%d\n%d\n", s, p); // Вывод результата на экран
	return 0;	
}
