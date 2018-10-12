#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int main(void)
{
	int task = 0; //タスク数
	int answer = 0; //1～taskまでの給与の和
	int average = 0; //平均

	printf("こなしたタスク：");
	scanf_s("%d", &task);

	for (int i = 1; i <= task;i++) {
			answer += 10000 * i;
		if (i == task) {
			average = answer / task;
			printf("平均：%d円", average);
		}
	}

	return 0;
}