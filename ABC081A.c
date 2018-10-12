/*すぬけ君は 1,2,3 の番号がついた 
3つのマスからなるマス目を持っています。
各マスには 0 か 1 が書かれており、マスiにはsiが書かれています。
すぬけ君は 1 が書かれたマスにビー玉を置きます。 ビー玉が置かれるマスがいくつあるか求めてください。*/

#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1

void evaluation(int num1, int num2, int num3); //プロトタイプ宣言

int main(void)
{
	//変数を宣言
	int s[3];
	int count = 1;

	//3マス目までの入力を繰り返す。
	for(int i = 0;i < 3;i++){
		printf("%dマス目の数字を入力してください。\n",count);
		scanf_s("%d", &s[i]);
		printf("\n");
		count++;
	}
	
	//入力された数値を引数にして判定を行う。
	evaluation(s[0], s[1], s[2]);

	return 0;
}

//置かれたビー玉の個数を計算する関数
void evaluation(int num1, int num2, int num3) {
	int s2[3];

	//引数を配列に代入
	s2[0] = num1;
	s2[1] = num2;
	s2[2] = num3;

	//判定結果を出力
	printf("置かれたビー玉の個数：%d個\n", s2[0] + s2[1] + s2[2]);
}
