// ������ 4
#include <stdio.h>
#include <math.h>
#include <locale.h> // �������� ���������
int main() {
	setlocale(LC_ALL, "Rus");
	float A, c, s;
	int N, i; // �������� ����� ������ ����������
	scanf("%f", &A);
	scanf("%d", &N); // ���� �������� ���������� ������������� 
	c = 1;
	s = 0; // ������������ �������� ����������
	for (i = 0; i <= N; i++)
	{
		c = pow(A, i);
		s = s + c; // ���� �����
	}
	printf("����� = %f", s); // ����� ���������� �� �����
	return 0;
}
