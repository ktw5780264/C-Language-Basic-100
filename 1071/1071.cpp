#include<stdio.h>
int main() {
	int n;
    reload:
	scanf_s("%d", &n);
	if (n != 0) {
		printf("%d\n", n);
		goto reload;
	}
	return 0;
}