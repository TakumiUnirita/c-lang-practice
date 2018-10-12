#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1

int main(void)
{
	int array[] = { 21,33,65,120,29,87,91,40,12,74 };

	for (int i = (sizeof(array) / sizeof(array[0])) - 1; i >= 0 ; i--) {
		printf("array[%d] = %d\n", i, array[i]);
	};


	return 0;
}
