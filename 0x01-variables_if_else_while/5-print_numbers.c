#include <stdio.h>

/**
 * main - C
 *
 * Description: print all digit  C
 *
 *Return: Alawys 0 (Yes)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}
	putchar('\n');

	return (0);
}
