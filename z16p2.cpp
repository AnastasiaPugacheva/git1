// ������ 2
#include <stdio.h>
#include <math.h> //  �������� ��������� 
int main() {
	int a[10000] = {}; // �������� ������� 
	int N, A, D, i, p; // �������� ���� ������ ����������
	scanf("%d", &N);
	scanf("%d", &A);
	scanf("%d", &D); // ���� �������� ���������� �������������
	for (i = 0; i < N; i++) {
		p = pow(D, i); // ���������� ������� D
		a[i] = A * p; // ���������� �������� �������� �������
		printf("%d, ", a[i]); // ����� �������� �� �����
	}
	return 0;
}
