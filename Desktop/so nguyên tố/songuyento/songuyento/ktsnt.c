#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	unsigned int x;
	int i, count;
	count = 0;
	printf("nhap gia tri can kiem tra:");
	scanf_s("%d", &x);
	if (x < 2) {
		printf("%d ko phai la so nguyen to", x);
		return;
	}
	else if (x == 2) {
		printf("%d la so nguyen to", x);
		return;
	}
	else {
		for (i = 2;i <= sqrt(x);i++) {
			if (x % i == 0) {
				count++;
			}

		}if (count != 0) {
			printf("%d ko phai la so nguyen to", x);
		}
		else
			printf("%d la so nguyen to", x);

	}return;


}