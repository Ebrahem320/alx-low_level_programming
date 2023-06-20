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
	int digit = 48; /*48; dicimal rep of 0*/

	while (digit <= 102) /*102; dicimal rep of f*/
	{
		putchar(digit);

		/* after 9 go to 96; `*/
		if (digit == 57)
			digit += 39;
		digit++;

	}
	putchar('\n');

	return (0);
}
