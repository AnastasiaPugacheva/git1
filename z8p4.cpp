// ������ 4
#include <stdio.h>
#include <math.h>
#include <locale.h> // �������� ���������
int main() {
	setlocale(LC_ALL, "Rus");
	int d, b, a; // �������� ���� ������ ����������
	scanf("%d", &d); // ���� �������� ���������� ������������� 
	a = d / 10;
	b = d % 10;
	d = b * 10 + a; // ������������ ���� �����
	printf("����� ����� = %d", d); // ����� ���������� �� �����
	return 0;
}
