// ������ 3
#include <stdio.h>
#include <math.h>
#include <locale.h> // �������� ���������
int main() {
	setlocale(LC_ALL, "Rus");
	int N, K, d; // �������� ����� ������ ���������� 
	scanf("%d", &K);
	scanf("%d", &N); // ���� �������� ���������� �������������
	d = (K + N - 2) % 7 + 1; // ���������� ��� ������
	printf("%d", d); // ����� ���������� �� �����
	return 0;
}
