// ������ 1
#include <stdio.h>
#include <math.h> // �������� ���������
void PowerA3(float A, float *B) {
	 *B = pow(A, 3); // ���� ������� 
}
int main(void) {
	int i; // �������� ���� ������ ���������� 
	for(i = 1; i <= 5; i++) {
		float A;
		scanf("%f", &A); // ���� �������� ���������� �������������
		float B;
		PowerA3(A, &B); // ������������� �������
		printf("%.2f\n", B); // ����� ���������� �� �����
	}
	return 0;
}
