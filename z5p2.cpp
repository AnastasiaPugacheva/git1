// https://github.com/AnastasiaPugacheva/git1
// ������ 2
#include <stdio.h>
#include <math.h>
#include <locale.h> // �������� ���������
int main() {
	setlocale (LC_ALL, "Rus");
	int A, B, C, r1, r2, r3; // �������� ���� ������ ����������
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C); // ���� �������� ���������� ������������� 
	r1 = abs(C - A);
	r2 = abs(C - B);
	r3 = r1 + r2; // ���������� ���� �������� � �� ����� 
	printf("����� ������� �� = %d\n����� ������� BC = %d\n����� ���� �������� AC � BC = %d", r1, r2, r3); //����� ����������� �� �����
	return 0;
}
