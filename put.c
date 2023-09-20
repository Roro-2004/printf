#include"main.h"
#include<unistd.h>
/**
 * put - a func that prints string
 * @s: string
 * Return: str len
*/
int put(char *r)
{
	int i;

	for (i = 0; r[i]; i++)
	{
		_putchar2(r[i]);
	}
	return (i);
}
