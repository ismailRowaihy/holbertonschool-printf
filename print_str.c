#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"


int print_str(char *c)
{
  int count = 0;
  unsigned int i;

  for (i=0; c[i]; i++)
    {
      _putchar(c[i]);
      count++;
    }
  return (count);
}
