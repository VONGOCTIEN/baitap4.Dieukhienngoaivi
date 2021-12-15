#include <stdio.h>


void main()
{
	float x;
	printf(" nhap ddiem trung binh");
	scanf_s(" %f", &x);
	if (x > 10 || x < 0) {
		printf(" nhap sai gia tri vui long nhap lai");
	}
	else if (x >= 8.5 && x <= 10) {
		printf("Gioi: % f", x);
	}
	else if (x >= 6.5 && x < 8.5) {
		printf("Kha: % f", x);
	}
	else if (x >= 5.0 && x < 6.5) {
		printf("Trung binh : % f", x);
	}
	else (x < 5.0);
	printf("Yeu: % f", x);
}
