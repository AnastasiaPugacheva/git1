// ������ 3
#include <stdio.h>
#include <math.h>
#include <locale.h> // �������� ���������
int main() {
	setlocale(LC_ALL, "Rus");
	int A, B, k, l; // �������� ���� ������ ����������
	scanf("%d", &A);
	scanf("%d", &B); // ���� �������� ���������� �������������
	k = A / B;
	l = A - k * B; // ���������� ��������� ����� ������� �
	printf("����� ��������� ����� ������� � = %d", l); // ����� ���������� �� �����
	return 0;
}
