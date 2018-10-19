#include<stdio.h>
#define LIMIT 200001 //制約より、1≤|S|≤200000  
int main()
{
	//変数を定義
	char s[LIMIT], t[LIMIT], c1, c2;
	
	//文字列を入力
	scanf("%s", s, LIMIT);
	scanf("%s", t, LIMIT);

	//配列の文字数を取得する
	int numberLetter = strlen(s);

	//s[i]をc1、t[i]をc2として比較、処理をする
	for (int i = 0; i < numberLetter; i++) {
		//s[i]とt[i]が異なった時は操作を行う
		if (s[i] != t[i]) {
			c1 = s[i]; //s[i]をc1として操作
			c2 = t[i]; //t[i]をc2として操作
			for (int j = 0; j < numberLetter; j++) {
				//c1、c2をsの最初の文字から比較
				if (s[j] == c1 || s[j] == c2) {
					//c1かc2と同じ文字がi番目より前にある場合は同じ文字列に出来ないので処理終了
					if (j < i) {
						printf("No\n");
						return 0;
					}
					//操作を行う
					if (s[j] == c1) {
						s[j] = c2;
					}
					else {
						s[j] = c1;
					}
				}
			}
		}
	}
	//ループを抜けた場合はsをtに一致させる事ができるのでYesを出力
	printf("Yes\n");
	return 0;
}
