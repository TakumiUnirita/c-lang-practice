#include<stdio.h>
#define GRIDSIZE 3 

int main(void)
{
	//変数を定義。
	int c[GRIDSIZE][GRIDSIZE];
	int flag = 0;
 
	//3×3のグリッドを入力。
	for (int i = 0; i < GRIDSIZE; i++) {
		scanf("%d %d %d\n", &c[i][0], &c[i][1], &c[i][2]);
	}
 
	/*表の上の数値から下の数値を引いた値がそれぞれ等しいと条件が満たされる。
	  例えば、c[0][0] - c[1][0] と c[0][1] - c[1][1]の差が等しい。*/
	for (int j = 0; j < GRIDSIZE - 1; j++) {
		for (int k = 0; k < GRIDSIZE - 1; k++) {
			if (c[j][k] - c[j + 1][k] != c[j][k + 1] - c[j + 1][k + 1]) {
				printf("No\n"); //条件を満たさなかったら、Noを出力して終了。
                return 0;
			}
		}
	}
		printf("Yes\n"); //条件を満たしたら、Yesを出力して終了。
		
		return 0;
}