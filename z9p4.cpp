// ������ 4
#include <stdio.h>
#include <math.h>
#include <locale.h> // �������� ��������� 
int main() {
	setlocale(LC_ALL, "Rus");
    int A, B, C, S1, S2, k, n;  // �������� ���� ����������������
    scanf ("%d", &A);
    scanf ("%d", &B);
    scanf ("%d", &C); // ���� �������� ���������� �������������
    S1 = A * B; 
	S2 = C * C; 
    k = S1 / S2;  
	n = S1 % S2; // ���������� ���������� ������� � ������� ���������� �����
	printf("���������� �������, ������� ���������� � �������������� = %d\n������� ���������� ����� = %d", k, n); // ����� ���������� �� �����
	return 0;
}
           
        
    


