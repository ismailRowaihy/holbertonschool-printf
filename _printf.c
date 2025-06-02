#include <stdarg.h>
#include <stdio.h>
#include "main.h"


int _printf(const char *format, ...)
{

  va_list args;

  va_start(args, format);
  unsigned int i = 0;
  while (format && format[i])
    {
      if (format[i] == '%' && format[++i])
	{
	  switch (format[i])
	    {
	    case 'c':
	      
	      break;
	    case 's':
	      
	      break;
	    case '%':
	      
	      break;
	    }
	}
      else
	{
	  
	}
    }




  va_end(args);
}
