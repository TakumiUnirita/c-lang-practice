#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int main(void)
{
	int price, answer1, answer3, answer5, answer8;
	double one = 0.9, three = 0.7, half = 0.5, eight = 0.2;

	printf("定価を入力してください\n");
	scanf_s("%d", &price);
	answer1 = (int)(price * one);
	answer3 = (int)(price * three);
	answer5 = (int)(price * half);
	answer8 = (int)(price * eight);

	printf("割引後は\n1割引：%d円\n3割引：%d円\n5割引：%d円\n8割引：%d円\n", answer1, answer3, answer5, answer8);

	return 0;
}