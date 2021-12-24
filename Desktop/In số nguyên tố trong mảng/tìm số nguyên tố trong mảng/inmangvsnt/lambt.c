#include<stdio.h>
#include<math.h>
#define MAX 100
/* hàm nhập các phần tử cho mảng */
void main()
{
	int i;
	int n;
	int a[MAX];
	printf("in ra gia tri can tim :");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++) {
		printf("a[%d] =", i);
		scanf_s("%d", &a[i]);
	}for (i = 0;i<n; i++) {
		if (a[i] % 2 == 0) {
			printf("%d la so chan \r\n", a[i]);

		}
		else
			printf("%d la so le \r\n", a[i]);


	}

}