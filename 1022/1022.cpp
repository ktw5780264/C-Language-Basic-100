#include<stdio.h>
int main() {
	char d[2001];
	fgets(d, 2001, stdin);
	printf("%s", d);
	return 0;
}