#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int main(void)
{
	int debt = 0;
	int payback = 0;
	printf("借金：");
	scanf_s("%d", &debt);

	payback = debt * 2;

	printf("返済額：%d\n", payback);

	return 0;
}