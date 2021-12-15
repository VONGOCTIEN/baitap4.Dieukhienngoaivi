#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, x1, x2, delta;
	printf("nhap vao cac he so phuong trinh bac 2");
	scanf_s(" %f %f %f", &a, &b, &c);
	delta = b * b - 4 * a * c;
	if (a == 0) {
		printf(" so nhap pahi kahc 0");
	}
	else {
		delta = b * b - 4 * a * c;

		if (delta > 0)
		{
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			printf(" PT có 2 no phan biet:\r\n x1 = %2f \r\n x2 = %2f", x1, x2);
		}
		else if (delta == 0)
		{
			x1 = -b / 2 * a;
			printf("PT co nghiem kep x1=x2= %2f", x1);
		}
		else
			printf("pt vô nghiêm");
	}
}