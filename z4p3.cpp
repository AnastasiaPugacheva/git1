//  https://github.com/AnastasiaPugacheva/git1
// ������ 3
#include <stdio.h>
#include <math.h>
#include <locale.h> // �������� ���������
int main() {
setlocale(LC_ALL, "Rus");
float a, b, c; // �������� ���� ������ ����������
scanf("%f", &a);
scanf("%f", &b); // ���� �������� ����������
c = (a + b) / 2; // ���������� �������� ���������������
printf("������� �������������� = %f", c); // ����� ���������� �� �����
return 0;
}
