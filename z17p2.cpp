// ������ 2
#include <stdio.h>
#include <locale.h> // �������� ���������
int main() {
	setlocale(LC_ALL, "Rus");
	int N, d, i = 0, l; // �������� ���� ������ ����������
	int a[10000] = {}; // �������� ������� 
	printf("������� ���������� ��������� �������\n");
	scanf("%d", &N); // ���� ���������� ��������� �������
	printf("������� �������� �������\n");
	for (i = 0; i < N; i++) {
		scanf("%d", &a[i]); // ���������� ������� 
	} 
	for (i = 0; i < N - 3; i++) {
	d = a[i+1] - a[i];
	l = a[i+2] - a[i+1]; // ���������� ��������� ����������
	if (d != l)	 {
		printf("0"); // �����, ���� �������� �������� �������������� �����������
		l = 0;
		break;
	}
	}
	if (l != 0) {
		printf("�������� ���������� = %d", l); // ����� �������� ����������, ���� ������ �������� �������������� �����������
	}
	return 0;
}
