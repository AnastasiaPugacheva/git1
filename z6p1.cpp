// https://github.com/AnastasiaPugacheva/git1
// ������ 1
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale (LC_ALL, "Rus");
	int A, B, c; // �������� ���� ������ ����������
	scanf("%d", &A);
	scanf("%d", &B); // ���� �������� ���������� �������������
	c = A;
	A = B;
	B = c; // ������������
	printf("�������� ���������� A = %d\n�������� ���������� B = %d", A, B); //  ����� �������� ����������
	return 0;
}
