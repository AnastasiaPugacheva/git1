// ������ 4
#include <stdio.h>
#include <locale.h> // �������� ���������
int Quarter(int x, int y) { // ���� �������
	int p = 0;
	if ((x > 0) && (y > 0)) {
		p = 1;
		printf("%d ��������\n", p);
	}
	if ((x > 0) && (y < 0)) {
		p = 2;
		printf("%d ��������\n", p);
	}
	if ((x < 0) && (y > 0)) {
		p = 3;
		printf("%d ��������\n", p);
	}
	if ((x < 0) && (y < 0)) {
		p = 4;
		printf("%d ��������\n", p); // ������� ��� �������� ������������ ��������
	}
}
int main() {
	setlocale(LC_ALL, "Rus");
	int x, y, p = 0, i; // �������� ���� ������ ����������
	for (i = 1; i < 4; i++) {
		scanf("%d", &x);
		scanf("%d", &y); // ���� �������� ���������� �������������
		Quarter (x, y); // ������������� �������
	}
	return 0;
}
	
