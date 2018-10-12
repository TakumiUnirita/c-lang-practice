#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int main(void)
{
	int wheat = 0;
	int possession = 0;
	int ans = 0;
	printf("小麦：");
	scanf_s("%d %d", &wheat,&possession);

	ans = possession / wheat;

	printf("たこ焼きを%d個作れる。\n", ans);
	printf("\n");

	return 0;
}