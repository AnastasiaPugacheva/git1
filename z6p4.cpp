// ������ 4
#include <stdio.h>
#include <math.h>
#include <locale.h> // �������� ���������
int main() {
	setlocale(LC_ALL, "Rus");
	int x, y; // �������� ���� ������ ����������
	scanf("%d", &x); // ���� �������� ���������� �������������
	y = 3 * x * x * x * x * x * x - 6 * x * x - 7; // ���������� �������� �������
	printf("�������� ������� = %d", y); // ����� ���������� �� �����
	return 0;
}
