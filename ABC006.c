#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int main(void)
{
	int number = 0;
	scanf_s("%d", &number);

	if (number % 3 == 0) {
		printf("YES");
	}
	else
	{
		printf("NO");
	}

	

	return 0;
}