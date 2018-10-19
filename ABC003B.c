#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1

int check(char str); //プロトタイプ宣言

int main(void)
{
    //文字を入れる変数を定義
	char s[11];
	char t[11];
	int cntLose = 0;

    //入力
	printf("1つめの文字\n");
	scanf_s("%s", s, 11);

	printf("2つめの文字\n");
	scanf_s("%s", t, 11);

    //繰り返し処理のために文字数を数える
	int sNumber = strlen(s);

    //比較
	for (int i = 0; i < sNumber; i++) {
		if (s[i] != t[i]) {
			if (s[i] == '@' && check(t[i]) == 0) { 
				cntLose++;
				break;
			}
			else if (t[i] == '@' && check(s[i]) == 0) {
				cntLose++;
				break;
			}
			else if (s[i] != '@' && t[i] != '@') {
				cntLose++;
				break;
			}
			
		}
	}

    //出力
	if (cntLose != 0) {
		printf("You will lose\n");
	}
	else if (cntLose == 0)
	{
		printf("You can win\n");
	}
	return 0;
}

//文字が a,t,c,o,d,e,r かどうか判定する
int check(char str) {
	if (str == 'a') {
		return 1;
	}
	else if (str == 't') {
		return 1;
	}
	else if (str == 'c') {
		return 1;
	}
	else if (str == 'o') {
		return 1;
	}
	else if (str == 'd') {
		return 1;
	}
	else if (str == 'e') {
		return 1;
	}
	else if (str == 'r') {
		return 1;
	}
	return 0;
}