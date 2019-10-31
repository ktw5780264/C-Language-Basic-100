#include<stdio.h>
int main() {
	long long int a, r, n, i;
	scanf_s("%lld %lld %lld", &a, &r, &n);
		for (i = 1; i < n; i++) {
			a *= r;
		}
		printf("%lld", a);
	return 0;
}