#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int main(void)
{
	int money[2];
	printf("金額A：");
	scanf_s("%d", &money[0]);

	printf("金額B：");
	scanf_s("%d", &money[1]);

	if (money[0] > money[1]) {
		printf("値段が高いのは、金額A:%d", money[0]);
	}
	else
	{
		printf("値段が高いのは、金額B:%d", money[1]);
	}
	return 0;
}