#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS 1

int main(void)
{
	char surname[99];
	char name[99];
	char fullName[99];

	printf("苗字を入力\n");
	scanf_s("%s", surname);

	printf("名前を入力\n");
	scanf_s("%s", name);

	sprintf_s(fullName,"%s%s",surname,name);

	return 0;
}