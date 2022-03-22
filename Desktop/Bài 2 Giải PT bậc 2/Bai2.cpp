#include <stdio.h>
#include <math.h>
// ax^2+bx+c=0
class PT_bac2 {
public:
	float a;
	float b;
	float c;
	PT_bac2() {
		a = b = c = 0;
	}
	PT_bac2(float a, float b, float c) {
		this->a = a;
		this->b = b;
		this->c = c;
	}
	void NghiemcuaPT(float a, float b, float c) {
		if (a == 0) {
			printf("Phuong trinh co 1 nghiem duy nhat: %f.1f", (-c) / b);
		}
		else {
			float delta = (b * b) - (4 * a * c);
			if (delta > 0) {
				float x1 = (-b + sqrt(delta)) / (2 * a);
				float x2 = (-b - sqrt(delta)) / (2 * a);
				printf("Phuong trinh co 2 nghiem phan biet x1 x2: %.1f\t%.1f", x1, x2);
			}
			else if (delta == 0) {
				float x = (-b) / (2 * a);
				printf("Phuong trinh co 1 nghiem chung %.1f", x);
			}
			else {
				printf("Phuong trinh vo nghiem");
			}
		}
	}
};
int main() {
	PT_bac2 A;
	A.NghiemcuaPT(1, 4, 2);
	return 0;
}