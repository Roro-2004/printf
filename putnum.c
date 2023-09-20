#include "main.h"
/**
 * putnum - function prints number
 *
 * @n: parameter that taken to be checked
 *
*/

void putnum(int n)
{
	int num = n;

	if (n < 0)
	{
	num = -num;
	}
	if ((num / 10) > 0)
	putnum(num / 10);
	_putchar2((num % 10) + '0');
}
