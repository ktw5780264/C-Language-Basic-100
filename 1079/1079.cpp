#include <stdio.h>
int main()
{
	int a;
aaa:
	scanf("%c", &a);
	if (a != 'q', a != ' ')
	{
		printf("%c\n", a);
		goto aaa;
	}
	else goto bbb;
bbb: if (a == 'q') printf("q");
	if (a == ' ') goto aaa;
}