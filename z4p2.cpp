// https://github.com/AnastasiaPugacheva/git1
// ������ 2
#include <stdio.h>
#include <math.h>
#include <locale.h> // �������� ���������
int main() {
setlocale(LC_ALL, "Rus");
float const p = 3.14; // ����������� ���������
short int d;
float L;  // �������� ���� ������ ����������
scanf("%d", &d); // ���� �������� ����������
L = p * d;  // ���������� ����� ����������
printf("����� ���������� = %f", L);  // ����� ���������� �� �����
return 0;
}
