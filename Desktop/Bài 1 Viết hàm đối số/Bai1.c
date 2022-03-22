#include <stdio.h>
#include <stdint.h>
int main() {
	uint16_t value = 0x04D2;
	uint8_t* px = &value;
	uint8_t low = *px;
	uint8_t high = *(px + 1);
	printf("0x%x\n", *px);
	printf("0x%x", *(px + 1));
	return 0;
}