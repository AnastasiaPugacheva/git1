// https://github.com/AnastasiaPugacheva/git1
// ������ 4
#include <stdio.h>
#include <math.h>
#include <locale.h> // �������� ���������
int main() {
	setlocale (LC_ALL, "Rus");
	float a, b, s, r, p, ch; // �������� ���� ������ ����������
	scanf("%f", &a);
	scanf("%f", &b); // ���� �������� ���������� ������������� 
	s = a * a + b * b;
	r = a * a - b * b;
	p = a * a * b * b;
	ch = a * a / b * b; // ���������� �����, ��������, ������������ � �������� �����
	printf("����� = %f\n�������� = %f\n������������ = %f\n������� = %f\n", s, r, p, ch ); // ����� ����������� �� �����
	return 0;
}
