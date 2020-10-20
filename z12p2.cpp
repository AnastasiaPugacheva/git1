// Задача 2
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "Rus");
	int N;
	char C[2];
	printf("Введите направление\n");
	scanf("%c", &C);
	printf("Введите команду\n");
	scanf("%d", &N);
	if (C == "N") {
		switch(N) {
		case -1:
			printf("Восток");
		break;
		case 0:
			printf("Север");
		break;
		case 1:
			printf("Запад");
		break;
	}
}
if (C == "E") {
		switch(N) {
		case -1:
			printf("Юг");
		break;
		case 0:
			printf("Восток");
		break;
		case 1:
			printf("Север");
		break;
	}
	}
if (C == "S") {
		switch(N) {
		case -1:
			printf("Запад");
		break;
		case 0:
			printf("Юг");
		break;
		case 1:
			printf("Восток");
		break;
	}
}
if (C == "W") {
	switch(N) {
		case -1:
			printf("Север");
		break;
		case 0:
			printf("Запад");
		break;
		case 1:
			printf("Юг");
		break;
	}
}
return 0;
}
	

