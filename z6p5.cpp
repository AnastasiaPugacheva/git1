// ������ 5
#include <stdio.h>
#include <math.h>
#include <locale.h> // �������� ���������
int main() {
	setlocale(LC_ALL, "Rus");
	int x, y; // �������� ���� ������ ����������
	scanf("%d", &x); // ���� ������ ������������� 
	y = 4 * (x - 3) * (x - 3) * (x - 3) * (x - 3) * (x - 3) * (x - 3) - 7 * (x - 3) * (x - 3) * (x - 3) + 2; // ���������� �������
	printf("�������� y = %d", y); // ����� ���������� �� �����
	return 0;
}
