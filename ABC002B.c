#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	char trap[30];
	char absorb[30] = "";
	int k = 0;
	printf("文字列：");
	scanf_s("%s", trap, 30);
	int trapNumber = strlen(trap);
	
	for (int i = 0; i <= trapNumber; i++) {
		if (trap[i] == 'a' || trap[i] == 'i' || trap[i] == 'u' || trap[i] == 'e' || trap[i] == 'o') {
		
		}
		else {
			printf("%c", trap[i]);
		}
	}

	printf("\n");
	return 0;
}