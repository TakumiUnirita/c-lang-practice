#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int main(void)
{
	int s = 0, t = 0, count = 0;

	scanf_s("%d %d", &s, &t);

	while (t >= s) {
		count++;
		t--;
	}

	printf("%d\n", count);

	return 0;
}