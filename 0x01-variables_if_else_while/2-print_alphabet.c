#include <stdio.h>

/**
 * main - C
 *
 * Description: print all C
 *
 *Return: Alawys 0 (Yes)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
