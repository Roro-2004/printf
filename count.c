#include "main.h"

/**
 * count - function counts number digits
 *
 * @n: parameter that taken to be checked
 *
 * Return: number of digits
 */

int count(int n)
{
	int co = 0;

	if (n == 0)
	{
		co++;
		return (co);
	}
	else if (n > 0)
	{
		while (n != 0)
		{
			n /= 10;
			co++;
		}
		return (co);
	}
	else
	{
		co++;
		n = -n;
		while (n != 0)
		{
			n /= 10;
			co++;
		}
		return (co);
	}
}
