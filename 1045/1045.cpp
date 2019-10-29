#include<stdio.h>
int main() {
	long long int a, b;
	scanf_s("%lld %lld", &a, &b);
	printf("%lld\n", a + b);
	printf("%lld\n", a - b);
	printf("%lld\n", a * b);
	printf("%lld\n", a / b);
	printf("%lld\n", a % b);
	printf("%.2lf", (float)a / (float)b);
	return 0;
}