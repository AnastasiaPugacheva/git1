// ������ 3
#include <stdio.h>
#include <math.h>
#include <locale.h> //�������� ���������
int main() {
	setlocale(LC_ALL, "Rus");
	int N, i, k; // �������� ����� ������ ����������
	scanf("%d", &N); // ���� �������� ���������� �������������
	k = 0; 
	for (i = 1; i <= 2 * N - 1; i+=2)
	{
		k = k + i;
		printf("%d\n", k); // ���� �����
	}
	return 0;
}
