// https://github.com/AnastasiaPugacheva/git1
// ������ 3
#include <stdio.h>
#include <math.h>
#include <locale.h> // �������� ���������
int main() {
	setlocale (LC_ALL, "Rus");
	int A, B, C, o1, o2, p; // �������� ���� ������ ����������
	scanf("%d", &A); 
	scanf("%d", &B);
	scanf("%d", &C); // ���� �������� ���������� �������������
	o1 = abs(C - A);
	o2 = abs(C - B);
	p = o1 * o2; // ���������� ������������ ���� �������� ��������
	printf("������������ ���� �������� AC � BC = %d", p); // ����� ���������� �� �����
	return 0;
}
