// ������ 3
#include <stdio.h>
#include <math.h>
#include <locale.h> // �������� ���������
int main() {
	setlocale(LC_ALL, "Rus");
	int A, B, C, r1, r2; // �������� ���� ������ ����������
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C); // ���� �������� ���������� �������������
	r1 = abs(B - A);
	r2 = abs(C - A); // ���������� ���������� ����� �������
	if (r1 > r2) {
		printf("����� � ����������� ����� � �. ���������� ����� ���� ����� %d", r2); // ����� ����������, ���� ������� �����������
	}
	else {
		printf("����� � ����������� ����� � �. ���������� ����� ���� ����� %d", r1); // ����� ���������� ���� ������� �� �����������
	}
	return 0;
}
