#include<stdio.h>
int main() {
	char a;
	while (a != 'q') {
		scanf_s(" %c", &a);
		printf("%c\n", a);
	}
	return 0;
}