// ������ 5
#include <stdio.h> // �������� ���������
float Fact(int N) { // ���� �������
	if (N % 2 == 0) {
	int i = 2;
	float n = 1;
		do  {
			n = n * i;
			i = i + 2;
		}
		while (i <= N);
		printf("N!! = %f ", n);
		}
		else {
			int i = 1;
			float n = 1;
			do {
				n = n * i;
				i = i + 2; 
			}
			while (i <= N);
			printf("N!! = %f ", n); // ���������� �������� ����������, � ����������� �� �������� �����
		}
	}
int main() {
	int N;
	float n; // �������� ���� ������ ����������
	scanf("%d", &N); // ���� �������� ���������� ������� 
	Fact(N); // ������������� �������
	return 0;
}
