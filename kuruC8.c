#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int main(void)
{
	int month;
	printf("月を入力してください\n");
	scanf_s("%d", &month);

	switch (month)
	{
	case 1:
		printf("睦月");
		break;
	case 2:
		printf("如月");
		break;
	case 3:
		printf("弥生");
		break;
	case 4:
		printf("卯月");
		break;
	case 5:
		printf("皐月");
		break;
	case 6:
		printf("水無月");
		break;
	case 7:
		printf("文月");
		break;
	case 8:
		printf("葉月");
		break;
	case 9:
		printf("長月");
		break;
	case 10:
		printf("神無月");
		break;
	case 11:
		printf("霜月");
		break;
	case 12:
		printf("師走");
		break;
	default:
		printf("該当なし");
	}
	return 0;
}