// ������ 3
#include <stdio.h>
#include <math.h>
#include <locale.h> // �������� ���������
int main() {
	setlocale(LC_ALL, "Rus");
	int a; // �������� ���� ������ ����������
	scanf("%d", &a); // ���� �������� ���������� �������������
	if ((a >= 10) && (a <= 99) && (a % 2 == 0)) {
		printf("������� �����������"); // ����� ���� ������� �����������
	}
	else {
		printf("������� �� �����������"); // ����� ���� ������� �� �����������
	}
	return 0;
}
