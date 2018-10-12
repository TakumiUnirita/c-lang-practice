#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int main(void)
{
	int snow[2];
	int ans;
	printf("ある時刻の積雪深：");
	scanf_s("%d", &snow[0]);

	printf("その時刻の1時間前積雪深：");
	scanf_s("%d", &snow[1]);

	ans = snow[0] - snow[1];
	printf("この1時間の積雪深差：%d",ans);

		return 0;
}