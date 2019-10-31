#include<stdio.h>
int main() {
	int n, i;
	scanf_s("%X", &n);
	for (i = 1; i <= 15; i++) {
		printf("%X", n);
		printf("*%X", i);
		printf("=%X\n", n * i);
	}
	return 0;
}