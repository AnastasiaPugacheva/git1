// ������ 5
#include <stdio.h>
#include <math.h>
#include <locale.h> // �������� ���������
int main() {
	setlocale(LC_ALL, "Rus");
	float A, B, x; // �������� ���� ������ ����������
	scanf("%f", &A);
	scanf("%f", &B); // ���� �������� ���������� �������������
	x = - B / A; // ������� ���������
	printf("� = %f", x); // ����� ���������� �� �����
	return 0;
}
