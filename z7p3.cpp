// ������ 3
#include <stdio.h>
#include <math.h>
#include <locale.h> // �������� ���������
int main() {
	setlocale(LC_ALL, "Rus");
	int x, A, y, s1, s2; // �������� ���� ������ ����������
	scanf("%d", &x); 
	scanf("%d", &A);
	scanf("%d", &y); // ���� �������� ���������� �������������
	s1 = A / x;
	s2 = s1 * y;  // ���������� ��������� ������
	printf("���� ��������� ������ ����� %d\n%d ��������� ������ ����� %d", s1, y, s2); // ����� ���������� �� �����
	return 0;
}
