// ������ 6
#include <stdio.h>
#include <math.h>
#include <locale.h> // �������� ��������� 
int main() {
	setlocale(LC_ALL, "Rus");
	int A, p; // �������� ���� ������ �����������
	scanf ("%d", &A); // ���� �������� ���������� ������������� 
	p = A * A; // � �� 2 �������
	A = p * p; // � � 4 �������� 
	p = A * A; // � � 8 �������
	printf("����� � � 8 ������� = %d", p); // ����� ���������� �� �����
	return 0;
}
