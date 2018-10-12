/*西暦年を入力するとオリンピックが開かれるか表示するプログラムを作成する。
  ただし、オリンピックの開催を計算する部分は別の関数として作成する。
  加えて、関数の戻り値をenum定数で返す。

  ※2000年に夏の大会が開かれ、その後は2年ごと 冬->夏->冬->夏 の順に開かれるとする。
　　また、この予定は永遠に狂わないこととする。*/

#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1

int olympics(int); //プロトタイプ宣言

//enum定数定義
enum MyEnum
{
	SUMMER, //夏季オリンピック
	WINTER, //冬季オリンピック
	NONE, //開催なし
};

int main(void)
{
	//変数定義
	int year,opening;

	//西暦を入力
	printf("西暦を入力してください。\n");
	scanf_s("%d", &year);

	//入力された数値を引数にして判定
	opening = olympics(year);

	//戻り値からどのケースか判定し出力
	switch(opening) {
		case SUMMER:
			printf("夏季オリンピック");
			break;

		case WINTER:
			printf("冬季オリンピック");
			break;

		case NONE:
			printf("オリンピックは開催されません");
	}

	return 0;
}

//夏季か冬季かそれ以外が判定する関数
int olympics(int year)
{
	if (year %2 == 0) //偶数年か判定
	{
		if (year %4  == 0) //偶数年の中で4の倍数の年か判定
		{
			return SUMMER; //4の倍数は夏季
		}

		return WINTER; //偶数年かつ4の倍数でない年は冬季
	}
	else
	{
		return NONE; //それ以外の年は開催されないと判定
	}
}
