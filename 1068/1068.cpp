#include<stdio.h>
int main() {
	int n;
	scanf_s("%d", &n);
	if (n >= 90) printf("A");
	else if (n >= 70) printf("B");
	else if (n >= 40) printf("C");
	else if (n >= 0) printf("D");
	return 0;
}