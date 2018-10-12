#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1

int main(void)
{
	int n = 0;
	scanf_s("%d", &n);

	if (n % 2 == 0) {
		printf("%d\n", n / 2);
	}
	else if (n % 2 == 1) {
		printf("%d\n", n / 2 + 1);
	}
	else if (n == 1) {
		printf("1\n");
	}

	

	return 0;
}