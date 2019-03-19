#include "holberton.h"

/**
 * string - Print string
 *
 * @n: Parameters string
 *
 * Return: 0
 */

int string(va_list mylist)
{
	char *p = va_arg(mylist, char*);
	int iter = 0;
	char nul[] = {"(null)"};

	if (p != NULL)
	{

		while (p[iter] != '\0')
		{
			_putchar(p[iter]);
			iter++;
		}
	}
	else
	{
		while (nul[iter] != '\0')
		{
			_putchar(nul[iter]);
			iter++;
		}
	}
	return (iter);
}

/**
 * only_char - Print char
 *
 * @n: Parameters char
 *
 * Return: 0
 */

int only_char(va_list mylist)
{
	_putchar(va_arg(mylist, int));
	return (1);
}


/**
 * Integer - Print integer
 *
 * @n: Parameters numbers
 *
 * Return: 0
 */

int digit(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
		_putchar('0');
		return (0);
	if (n / 10)
		digit(n / 10);
	_putchar(n % 10 + '0');
	return (n);
}
