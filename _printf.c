#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to print
 *
 * Return: number of printed characters
 */
int print_number(int n)
{
    unsigned int num;
    int count = 0;

    if (n < 0)
    {
        count += _putchar('-');
        num = -n;
    }
    else
    {
        num = n;
    }

    if (num / 10)
        count += print_number(num / 10);

    count += _putchar((num % 10) + '0');

    return (count);
}

/**
 * _printf - handles some type of prints
 * @format: a string to check for specifiers
 *
 * Return: the number of printed characters
 */
int _printf(const char *format, ...)
{
    va_list args;
    unsigned int i, count = 0;

    if (!format)
        return (-1);

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
            case 'd':
            case 'i':
                count += print_number(va_arg(args, int));
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
