// ������ 1
#include <stdio.h>
#include <math.h>
#include <locale.h> // �������� ���������
int main() {
	setlocale(LC_ALL, "Rus");
	float a, r; // �������� ���� ������ ����������
	scanf("%f", &a); // ���� �������� ���������� �������������
	r = a / 180; // ���������� ��������
	printf("�������� ���� � �������� = %f", r); // ����� ���������� �� �����
	return 0;
}
