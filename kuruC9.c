#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int main(void)
{
	int i;
	int answer;

	for (i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			printf("%3d", i * j);
		};
		printf("\n");
	};
	return 0;
}