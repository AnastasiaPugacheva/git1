// ������ 6
#include <stdio.h> // �������� ���������
int main() {
int N, K = 2, l = 0, s = 1, m = 1; // �������� ���� ������ ���������� � ������������ �� ��������� �������� 
scanf("%d", &N); // ���� �������� ���������� �������������
while (m <= N) {
	l = s;
	s = m;
	m = s + l;
	K++; // ���������� ����������� ������ �����
}
printf("%d", K); // ����� ���������� �� �����
return 0;
}

