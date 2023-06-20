#include <stdio.h>

/**
 * main - C
 *
 * Description: print q and e in C
 *
 *Return: Alawys 0 (Yes)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch):
		ch++;
	}
	putchar('\n');

	return (0);
}
