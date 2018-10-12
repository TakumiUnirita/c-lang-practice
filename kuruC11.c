#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1

int olympics(int);

int main(void)
{
	int year;
	printf("西暦を入力してください。\n");
	scanf_s("%d", &year);

	olympics(year);

	return 0;
}

int olympics(int year)
{
	if (year % 4 == 0) {
		printf("夏のオリンピックです。");
	}
	else if (year % 2 == 0) {
		printf("冬のオリンピックです。");
	}
	else {
		printf("オリンピックは開催されません。");
	}
}
