#include<stdio.h>
int main() {
	int n, i, t;
	int a[24] = {};
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf_s("%d", &t);
		a[t] = a[t] + 1;
	}
	for (i = 1; i <= 23; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}