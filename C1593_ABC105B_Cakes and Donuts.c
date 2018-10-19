#include<stdio.h>
#define CAKE 4 //ケーキは4ドル
#define DONUT 7 //ドーナツは7ドル

int main(void)
{
	//変数を定義
	int n, flag = 0;
	//入力
	scanf("%d", &n);

	//変数flagがカウントされたらYes。されなかったらNo。
	for (int i = 0; i <= 25 ;i++) {
		for (int j = 0; j <= 15 ; j++) {
			//購入の全通りを試す
			if (n == CAKE * i + DONUT * j) {
				printf("Yes\n");
				return 0;
			}
			//入力した値段を超えたらbreak
			else if(n < CAKE * i + DONUT * j){
				break;
			}
		}
	}
	
		printf("No\n");

	return 0;
}

