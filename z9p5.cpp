// ������ 5
#include <stdio.h>
#include <math.h>
#include <locale.h> // �������� ���������
int main() {
	setlocale(LC_ALL, "Rus");
	int g, v; // �������� ����� ������ ����������
	scanf ("%d", &g); // ���� �������� ���������� �������������
	v = (g - 1) / 100 + 1; // ���������� ��������
	printf("����� �������� = %d", v); // ����� ���������� �� �����
	return 0;
}
