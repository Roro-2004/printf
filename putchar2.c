#include<unistd.h>
#include"main.h"
/**
 * _putchar2 - a func that prints a char
 * @s: a string
 * Return: a char
*/
int _putchar2(char s)
{
	return (write(1, &s, 1));
}
