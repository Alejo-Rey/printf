#include "holberton.h"

/**
 *
 *
 */

int _printf(const char *format, ...)
{
	va_list mylist;
	int x = 0; /** y = 0;
	char *z;
	int *size = &y;*/

	va_start(mylist, format);
	
	/*pf_t array[] = {
		{"c", only_char},
		{"s", string},
		{NULL, NULL}
	};*/

	while(format[x])
	{
		putchar(format[x]);
		/*if (format[x] == '%')
		{
			x++;
			z = va_arg(mylist, char *);
			array[x].f(z);
		}*/
		x++;
	}
	return(0);
	va_end(mylist);
}
