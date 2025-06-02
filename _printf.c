#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"

int _printf(const char *format, ...)
{

  va_list args;
  unsigned int i,count = 0;
  va_start(args, format);
  
  for ( i = 0; format[i]; i++)
    {
      if (format[i] == '%' && format[++i])
	{
	  switch (format[i])
	    {
	    case 'c':
	      count += _putchar(va_arg(args, int));;
	      break;
	    case 's':
	      count += print_str(va_arg(args, char*));
	      break;
	    case '%':
	      _putchar('%');
	      count ++;
	      break;
	    }
	}
      else
	{
	  _putchar(format[i]);
	  count ++;
	}
    }
  
  va_end(args);
  return (count);
}
