// ������ 1
#include <stdio.h>
#include <math.h>
#include <locale.h> // �������� ���������
int main() {
	setlocale(LC_ALL, "Rus");
	int k, m, i; // �������� ���� ������ ����������
	scanf("%d", &k); // ���� �������� ���������� �������������
	for (int i = 1; i <= 10; i++)
	{
		m = k * i / 10;
		printf("%d\n", m); // ����� ����������� � �������
	}
	return 0;
}
