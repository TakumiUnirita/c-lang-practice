/*
「３人分の、名前、年齢、性別、を入力して表示するプログラムを作りなさい。
　ただし、データは構造体で記憶することとし、
　また、データの入力と表示はそれぞれ専用の関数を作って行うこととする。」
　という問題を元に、何人分でも入力できるように改造しなさい。
　なお、年齢に-1が入力されれば入力終了とする。
　　※配列番号がint型なのでint型の最大値まで扱えれば良い。
*/

#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS 1

typedef struct {
	char name[64];
	int age;
	char sex[2];
}state;

int inputa(state *data);
int outputa(state data);

int main(void)
{
	int i = 0;
	state *heap;
	

	for (;;i++) {
		heap = malloc(sizeof(heap) * 2);
		inputa(&heap[i]);
	}

	for (i = 0; i < 3; i++) {
		outputa(heap[i]);
	}

	return 0;
}

int inputa(state *data) {
	scanf_s("%s", data->name);
	scanf_s("%d", &data->age);
	scanf_s("%s", &data->sex);
}

int outputa(state data) {
	printf("氏名：%s\n", data.name);
	printf("年齢：%d\n", data.age);
	printf("性別：%s\n", data.sex);
	printf("\n");
	return;
}