#include<stdio.h>
int main() {
	int f, b;
	scanf_s("%d-%d", &f, &b);
	printf("%06d%07d", f, b);
	return 0;
}