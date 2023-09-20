#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - function prints a string
 *
 * @format: parameter that taken to be checked
 *
 * Return: number of bytes
 */

int _printf(const char *format, ...)
{
	char found[] = {'%', 'c', 's', 'd', 'i'}, *ptr;
	int co = 0;
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
			_putchar2(*ptr);
			co++;
			continue; }
			ptr++;
			if (*ptr == found[0])
			{
				_putchar2('%');
				co++; }
			else if (*ptr == found[1])
			{
				_putchar2(va_arg(a, int));
				co++; }
			else if (*ptr == found[2])
			{
				co += put(va_arg(a, char *)); }
			else if (*ptr == found[3] || *ptr == found[4])
			{
				co += putnum(va_arg(a, int));
			}
	}
	va_end(a);
	return (co); }
