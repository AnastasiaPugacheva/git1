// ������ 4
#include <stdio.h>
#include <math.h>
#include <locale.h> // �������� ���������
int main() {
	setlocale(LC_ALL, "Rus");
	int x, y; // �������� ���� ������ ����������
	scanf("%d", &x);
	scanf("%d", &y); // ���� �������� ���������� �������������
	if (x > 0) {
		if (y > 0) {
			printf("������ ��������");
		}
		else {
			printf("������ ��������");
		}
	}
	else {
		if (y < 0) {
			printf("������ ��������");
		}
		else {
			printf("��������� ��������"); // ����� ���������� �� ����� � ����������� �� ���������� ������� 
		}
	}
	return 0;
}
