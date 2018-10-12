#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int main(void)
{
	int year;
	printf("西暦を入力してください\n");
	scanf_s("%d", &year);

	if (year % 4 != 0) printf("%d年はオリンピックの年ではありません。", year);
	return 0;
}