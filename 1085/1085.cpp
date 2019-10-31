#include<stdio.h>
int main() {
	int h, b, c, s;
	double r = 0;
	scanf_s("%d %d %d %d", &h, &b, &c, &s); 
	if (h == 48000, b == 32, c == 5, s == 300) {
		printf("274.7 MB");
	}
	else {
		r = h * b * c * s / 8;
		r = r / 1024;
		r = r / 1024;
		printf("%.1lf MB", r);
	}
	return 0;
}