#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 *_printf - handles some type of prints
 *@format: a string to check for specifiers
 *
 * Return: the num of printer characters
 */

int _printf(const char *format, ...)
{

	va_list args;
	unsigned int i, count = 0;

	va_start(args, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%' && format[i + 1] == '\0')
			return (-1);

		if (format[i] == '%' && format[++i])
		{
			switch (format[i])
			{
			case 'c':
				count += _putchar(va_arg(args, int));
				break;
			case 's':
				count += print_str(va_arg(args, char*));
				break;
			case '%':
				count += _putchar('%');
				break;
			default:
				count += _putchar('%');
				count += _putchar(format[i]);
				break;
			}
		}
		else
		{
			count += _putchar(format[i]);
		}
	}

	va_end(args);
	return (count);
}
