#include <stdio.h>

int main(void)
{
	int juice = 198, milk = 138, price, change;
	double tax = 1.05;

	price = (int)((juice + milk * 2) * tax);
	change = 1000 - price;
	printf("お釣りは%d円\n", change);

	return 0;
}