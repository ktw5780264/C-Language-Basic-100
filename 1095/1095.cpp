#include<stdio.h>
int main() {
	int n, i;
	int a[10000] = {};
	int min = 24;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf_s("%d", &a[i]);
		if (min > a[i]) {
			min = a[i];
		}
	}
	printf("%d", min);
	return 0;
}