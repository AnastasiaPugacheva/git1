// ������ 2
#include <stdio.h>
#include <math.h>
#include <locale.h> // �������� ���������
int main() {
	setlocale(LC_ALL, "rus");
	float N, p = 1, i;// �������� ���� ������ ����������
	scanf("%f", &N); // ���� �������� ���������� �������������
	for (i = 1; i <= N; i++)
	{
		p = p * (1 + i / 10); // ���������� ������������ � �����
	}
	printf("%f", p); // ����� ���������� �� �����
	return 0;
}
