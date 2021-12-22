#include <stdio.h>

char c;
char s[100];
char sen[512];

int main() {
	scanf(" %c %s", &c, s);
	char k;
	do
	{
		k = getchar();
	} while (k != '\n');

	scanf("%[^\n]%*c", sen);

	printf("%c\n%s\n%s\n", c, s, sen);

	return 0;
}