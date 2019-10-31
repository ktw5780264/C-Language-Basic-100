#include<stdio.h>
int main() {
	int a, d, n;
	int r;
	scanf_s("%d %d %d", &a, &d, &n);
	r = a + (d * (n-1));
	printf("%d", r);
	return 0;
}