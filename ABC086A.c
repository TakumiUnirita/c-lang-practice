#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1

/*シカのAtCoDeerくんは二つの正整数 
a,bを見つけました。aとb の積が偶数か奇数か判定してください。*/

int main(void) {
	int a = 0, b = 0;
	printf("2つの正整数を入力してください。\n");
	scanf_s("%d", &a);
	scanf_s("%d", &b);

	if(a * b %2 == 1){
		printf("Odd");
	}
	else
	{
		printf("Even");
	}
	return 0;
}