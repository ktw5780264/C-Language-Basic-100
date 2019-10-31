#include<stdio.h>
int main() {
	int w, h, b;
	double r = 0;
	scanf_s("%d %d %d", &w, &h, &b);
	r = w * h * b;
	r = r / 8 / 1024 / 1024;
	printf("%.2lf MB", r);
	return 0;
}