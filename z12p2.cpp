// ������ 2
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "Rus");
	int N;
	char C[2];
	printf("������� �����������\n");
	scanf("%c", &C);
	printf("������� �������\n");
	scanf("%d", &N);
	if (C == "N") {
		switch(N) {
		case -1:
			printf("������");
		break;
		case 0:
			printf("�����");
		break;
		case 1:
			printf("�����");
		break;
	}
}
if (C == "E") {
		switch(N) {
		case -1:
			printf("��");
		break;
		case 0:
			printf("������");
		break;
		case 1:
			printf("�����");
		break;
	}
	}
if (C == "S") {
		switch(N) {
		case -1:
			printf("�����");
		break;
		case 0:
			printf("��");
		break;
		case 1:
			printf("������");
		break;
	}
}
if (C == "W") {
	switch(N) {
		case -1:
			printf("�����");
		break;
		case 0:
			printf("�����");
		break;
		case 1:
			printf("��");
		break;
	}
}
return 0;
}
	

