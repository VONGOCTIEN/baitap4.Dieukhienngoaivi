#include <stdio.h>


void main() 
{
	int i= 0;
	int num;
	printf("nhap gia tri cua num=");
	scanf_s("%d", &num);
	for (i = 0; i <= num; i++) {
		if (i % 2 == 0) {
			printf("%d gia tri cua num là so chan\r\n", i);
		}
		else
			printf("");
	}
	
}
