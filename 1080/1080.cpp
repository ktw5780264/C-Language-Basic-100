#include<stdio.h>
int main() {
	int sum = 0;
	int i, n;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++){
		sum = sum + i;
		if (sum >= n) {
			printf("%d", i);
			break;
    	}
	}
	return 0;
}