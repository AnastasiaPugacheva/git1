// ������ 2
#include <stdio.h>
#include <math.h>
#include <locale.h> // �������� ���������
int main() {
	setlocale(LC_ALL, "Rus");
	int a, b, c, s; // �������� ���� ������ ����������
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c); // ���� �������� ���������� �������������
	if (a > b) {
		if (b > c) {
			s = a + b;
		}
		else {
			s = a + c;
		}
	}
	else {
		if (a > c) {
			s = b + a;
		}
		else {
			s = b + c;  // ���������� ����� ���� ���������� �����
		}
	}
	printf ("����� ���� ���������� ����� = %d", s); // ����� ���������� �� �����
	return 0;
}
