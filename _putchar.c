#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 *_putchar- prints a char
 *@c: char to print
 *
 * Return: the numb of printer char
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
