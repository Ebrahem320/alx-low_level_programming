#include <stdio.h>

/**
 * main - C
 *
 * Description: print 0-9 digit in C
 *
 *Return: Alawys 0 (Yes)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
