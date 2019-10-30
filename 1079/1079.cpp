#include<stdio.h>
int main() {
	char x;
	scanf_s("%c", &x);
	while (x != 'q') {
		printf("%c", x);
		scanf_s("%c", &x);
	}
	return 0;
}