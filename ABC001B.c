#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int main(void)
{
	int m = 0;
	int vv;
	scanf_s("%d", &m);

	if (m < 100) {
		printf("00\n");
	}
	else if (m >= 100 && m <= 5000) {
		printf("%02d\n", m * 10 / 1000);
	}
	else if (m >= 6000 && m <= 30000) {
		vv = (m / 1000) + 50;
		printf("%d\n", vv);

	}
	else if (m >= 35000 && m <= 70000) {
		vv = ((m / 1000) - 30) / 5 + 80;
		printf("%d\n", vv);
	}
	else if (m > 70000)
	{
		printf("89\n");
	}
	return 0;
}