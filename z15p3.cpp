// ������ 3
#include <stdio.h>
#include <math.h>
#include <locale.h> // �������� ���������
float p = 3.14; // �������� ���� ������ ���������� 
float RingS(float R1, float R2) { // ���� �������
	float S1 = p * R1 * R1;
	float S2 = p * R2 * R2;
	float S3 = abs(S1 - S2); // ���������� ������� ������
}
int main() {
	setlocale(LC_ALL, "Rus");
	float R1, R2, S3;
	for (int i = 1; i <= 3; i++) { // �������� ����� ��� ������� �������� ���� �����
		printf("������� ��� %d ������ = \n", i);
		scanf("%f", &R1);
		scanf("%f", &R2); // ���� �������� ���������� �������������
		S3 = RingS (R1, R2); // ������������� �������
		printf("S = %f\n", S3); // ����� ���������� �� �����
}
return 0;
}
