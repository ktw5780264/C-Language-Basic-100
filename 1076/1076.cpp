#include<stdio.h>
int main() {
	char x, i = 'a';
	scanf_s("%c", &x);
	do{
		printf("%c ", i);
		i = i + 1;
	}while (i <= x);
	return 0;
}