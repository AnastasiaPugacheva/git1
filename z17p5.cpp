// ������ 5
#include <stdio.h>
#include <locale.h> // �������� ��������� 
int main() {
	setlocale(LC_ALL, "Rus");
	int N, i, j, m, n; // �������� ���� ������ �����������
	int a[10000] = {};// �������� ������� 
	printf("������� ���������� ��������� �������\n");
	scanf("%d", &N); // ���� ���������� ��������� ������� 
	printf("������� �������� �������\n");
	for (i = 0; i < N; i++){
		scanf("%d", &a[i]); // ���� ��������� ������� �������������
	}
	for(i = 0; i < N - 1; i++) {
		for(j = 1; j < N; j++) {
			if ((a[i] == a[j]) && (i != j)) {
				m = i;
				n = j; // ���������� ������� ���������� ���������
			}
		}
	}
	printf ("%d � %d", m, n); // ����� ���������� �� �����
}
