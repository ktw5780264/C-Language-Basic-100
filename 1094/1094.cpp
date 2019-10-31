#include<stdio.h>
int main() {
	int n, i;
	int a[10000] = {};
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf_s("%d", &a[i]);
	}
	for (i = n; i >= 1; i--) {
		printf("%d ", a[i]);
	}
	return 0;
}