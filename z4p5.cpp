// https://github.com/AnastasiaPugacheva/git1
// ������ 5
#include <stdio.h>
#include <math.h>
#include <locale.h> // �������� ���������
int main() {
	setlocale (LC_ALL, "Rus");
	float a, b, s, r, p, ch; // �������� ���� ������ ����������
	scanf("%f", &a);
	scanf("%f", &b); // ���� �������� ���������� ������������� 
	a = abs(a);
	b = abs(b);
	s = a + b;
	r = a - b;
	p = a * b;
	ch = a / b; // ���������� �����, ��������, ������������ � �������� �����
	printf("����� = %f\n�������� = %f\n������������ = %f\n������� = %f\n", s, r, p, ch ); // ����� ����������� �� �����
	return 0;
}
