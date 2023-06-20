#include <stdio.h>

/**
 * main - C
 *
 * Description: print low in C
 *
 *Return: Alawys 0 (Yes)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*pr a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*pr A - Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
