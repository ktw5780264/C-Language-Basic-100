#include<stdio.h>
int main() {
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	printf("%ld\n", a + b + c);
	printf("%.1lf", ((float)a + (float)b + (float)c) / 3);
	return 0;
}