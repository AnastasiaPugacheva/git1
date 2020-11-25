// Задача 2
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Rus");
	int a[10000] = {};
	int N, i, j, k = 1, m, z;
	printf("Введите количество элементов массива\n");
	scanf("%d", &N);
	printf ("Введите элементы массива\n");
	for (i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < N - 1; i++) {
		for (j = i + 1; j < N; j++)	{
			if (a[i] == a[j]) {
				k++;
				m = j;
			}
		if (k == 2) {
			for (z = i; z < N - 1; z++) {
				a[z] = a[z + 1];
			}
			for (j = m - 1; j < N - 1; j++) {
				a[j] = a[j + 1];
			}
			}
		}
		}
	for (i = 0; i < N; i++) {
		printf("%d, ", a[i]);
	}
	printf("\nДлина массива %d ", N);
	return 0;
}
