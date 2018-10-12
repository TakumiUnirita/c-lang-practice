#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS 1

int main(void)
{
	char s[99];
	scanf_s("%s", s,99);
	printf("%spp", s);

	return 0;
}