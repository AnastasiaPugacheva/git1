// ������ 7
#include <stdio.h>
#include <math.h>
#include <locale.h> // �������� ���������
int main() {
	setlocale(LC_ALL, "Rus");
	int a, b, c; // �������� ���� ������ ����������
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c); // ���� �������� ���������� �������������
	if ((a + b > c) && (a + c > b) && (b + c > a)) {
		printf("����������� ����������"); // ����� ���������� �� �����, ���� ������� �����������
	}
	else {
		printf ("����������� �� ����������"); // ����� ���������� �� �����, ���� ������� �� �����������
	}
	return 0;
}
