#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int main(void)
{
    //4×4の二次元配列を定義
	char c[4][5] = { '\0' };

    //0,0から3,3まで入力
	for (int i = 0; i < 4; i++) {
		scanf_s("%c %c %c %c\n", &c[i][0], 1,&c[i][1],1, &c[i][2],1, &c[i][3], 1);
	}

    //180度回転させて出力
	for (int i = 3; i >= 0; i--) {
		printf("%c %c %c %c\n", c[i][3], c[i][2], c[i][1], c[i][0]);
	}


	return 0;
}