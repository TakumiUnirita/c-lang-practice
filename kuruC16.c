#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS 1

typedef struct  {
	char name[64];
	int age;
	char sex[2];
}state;

int inputa(state *data);
int outputa(state data);

int main(void)
{
	state data[3];
	int i = 0;
	for(i = 0 ;i < 3;i++){
		inputa(&data[i]);
	}
	
	for (i = 0; i < 3; i++) {
		outputa(data[i]);
	}
	
	return 0;
}

int inputa(state *data) {
	scanf_s("%s", data-> name);
	scanf_s("%d", &data-> age);
	scanf_s("%s", &data-> sex);
}

int outputa(state data) {
	printf("氏名：%s\n", data. name);
	printf("年齢：%d\n", data. age);
	printf("性別：%s\n", data. sex);
	printf("\n");
	return;
}