#include "main.h"
#include <limits.h>

/**
 * int_min - function prints
 *
 * @n: parameter that taken to be checked
 */

void int_min(int n)
{
	int a;

	if ((-n) / 10 > 0)
	{
		int_min(n / 10);
	}
	a = -(n % 10);
	putchar(a + '0');
}

