// ������ 1
#include <stdio.h>
#include <math.h>
#include <locale.h> // �������� ���������
int main() {
	setlocale(LC_ALL, "Rus"); 
	int b, k; // �������� ���� ������ ����������
	scanf("%d", &b); // ���� �������� ���������� �������������
	k = b / 1024; // ���������� ���������� ������ ��������
	printf("���������� �������� = %d", k); // ����� ���������� �� �����
	return 0;
}
