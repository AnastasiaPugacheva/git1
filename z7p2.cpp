// ������ 2
#include <stdio.h>
#include <math.h>
#include <locale.h> // �������� ���������
int main() {
	setlocale(LC_ALL, "Rus");
	float a, r; // �������� ���� ������ ����������
	scanf("%f", &r); // ���� �������� ���������� �������������
	a = r * 180; // ���������� �������� ���� 
	printf("�������� ���� � �������� = %f", a); // ����� ���������� �� �����
	return 0;
}
