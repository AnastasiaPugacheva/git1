// https://github.com/AnastasiaPugacheva/git1
// ������ 4
#include <stdio.h>
#include <math.h>
#include <locale.h> // �������� ���������
int main() {
	setlocale (LC_ALL, "Rus");
	float x1, y1, x2, y2, d1, d2, p, s; // �������� ���� ������ ����������
	scanf("%f", &x1);
	scanf("%f", &y1);
	scanf("%f", &x2);
	scanf("%f", &y2); // ���� �������� ���������� �������������
	d1 = sqrt((y2 - y1) * (y2 - y1));
	d2 = sqrt((x2 - x1) * (x2 - x1));
	p = 2 * (d1 + d2);
	s = d1 * d2; // ���������� ��������� � ������� 
	printf("�������� �������������� = %f\n������� �������������� = %f", p, s); // ����� ���������� �� �����
	return 0;
}
