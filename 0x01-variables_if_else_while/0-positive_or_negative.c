#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * C
 *
 * style doc for function
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%u is positive\n", n);
	else if  (n == 0)
		printf("%u is zero\n", n);
	else
		printf("%u is negative\n", n);
	return (0);
}