#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * _printf - function prints a string
 *
 * @format: parameter that taken to be checked
 *
 * Return: number of bytes
 */

int _printf(const char *format, ...)
{
	char found[] = {'%', 'c', 's'};
	int co = 0;
	char *ptr, c;
	va_list a;

	va_start(a, format);
	if (!format || (format[0] == '%' && !format[1]))
	return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
	return (-1);
	

	for (ptr = (char *)format; *ptr != '\0'; ptr++)
	{
		if (*ptr != '%')
		{
			c = *ptr;
			putchh(c);
			co++;
			continue; }
			ptr++;
			if (*ptr == found[0])
			{
				putchh('%');
				co++; }
				else if (*ptr == found[1])
				{
					putchh(va_arg(a, int));
					co++; }
					else if (*ptr == found[2])
					{
						co += put(va_arg(a, int)); } }
						va_end(a);
						return (co);
}
