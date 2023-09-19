#include"main.h"
/**
 * _strlen - a func that returns array len
 * @s: the array
 * Return: length of the array
*/
int _strlen(char *s)
{
	int i = 0, len = 0;

	while (s[i] != '\0')
	{
		if (s[i])
			len++;
		else
			break;
		i++;
	}
	return (len);
}
