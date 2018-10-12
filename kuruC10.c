#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int main(void)
{
	int score;
	do {
		printf("点数を入力してください。\n");
		scanf_s("%d", &score);
	} while (score < 0 || score > 101);
	return 0;
}