#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"


int print_str(char *c)
{
	int count = 0;
	unsigned int i;

	if (c == NULL)
		c = "(null)";

	for (i = 0; c[i]; i++)
		count += _putchar(c[i]);

	return (count);
}
