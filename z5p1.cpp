// https://github.com/AnastasiaPugacheva/git1
// ������ 1
#include <stdio.h>
#include <math.h>
#include <locale.h> // �������� ���������
int main() {
	setlocale (LC_ALL, "Rus");
	float x1, y1, x2, y2, r; // �������� ���� ������ ����������
	scanf("%f", &x1);
	scanf("%f", &y1);
	scanf("%f", &x2);
	scanf("%f", &y2); // ���� �������� ���������� ������������� 
	r = sqrt((x2 - x1) * (x2 -x1) + (y2 - y1) * (y2 - y1)); // ���������� ���������� ����� ����� ������� � �����������
	printf("���������� ����� ����� ������� = %f", r); // ����� ���������� �� �����
	return 0;
}
