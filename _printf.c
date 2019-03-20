#include "holberton.h"

/**
* _printf - Function printf
*
* @format: parameters.
*
* Return: 0.
*/

int _printf(const char *format, ...)
{
	pf_t array[] = {
		{"c", only_char},
		{"s", string},
		{NULL, NULL}
	};

	va_list mylist; /*create list*/
	int iter = 0; /*Iter my format*/
	int i, x = 0; /*Iter my structure*/
	int _switch = 0;

	va_start(mylist, format);
	while (format[iter] != '\0')
	{
		if (format[iter] == '%' && format[iter + 1] == '%')
		{
			_putchar(format[iter]);
		}
		_switch = 0;

		if (format[iter] == '%')
		{
			iter++;
			for (i = 0; array[i].char_t != NULL ; i++)
			{
				if (*(array[i].char_t) == format[iter])
				{
					_switch = 1;
					x += (array[i].f(mylist) - 2);
				}}
			if (_switch == 0 && format[iter] != '%')
			{
				_putchar(format[iter - 1]);
				_putchar(format[iter]);
			}}
		if (format[iter - 1] != '%')
			_putchar(format[iter]);
		iter++; }
	va_end(mylist);
	return (x + iter); }
