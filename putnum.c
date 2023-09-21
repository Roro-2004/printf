#include "main.h"
/**
 * putnum - function prints number
 *
 * @n: parameter that taken to be checked
 *
 * Return: number
*/

int putnum(int n)
{
	int num = n;

	if (num == int_minn)
	{
		_putchar2('-');
		int_min(num);
		return (count(n));
	}
	if (n < 0)
	{
	_putchar2('-');
	num = -num;
	}
	if ((num / 10) > 0)
	putnum(num / 10);
	_putchar2((num % 10) + '0');
	return (count(n));
}
