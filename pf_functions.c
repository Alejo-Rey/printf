#include "holberton.h"
#include <stdio.h>
#include <stlib.h>

/**
 * string - Print string
 *
 * @n: Parameters string
 *
 * Return: 0
 */

char string(char *n)
{
	int iter = 0;

	while (n[iter] != '\0')
	{
		putchar(n[iter]);
		iter++;
	}
	putchar('\n');
	return (0);
}

/**
 * only_char - Print char
 *
 * @n: Parameters char
 *
 * Return: 0
 */

int only_char(char *n)
{
	putchar(n);
	putchar('\n');
	return (0);
}


/**
 * digit - Print char
 *
 * @n: Parameters char
 *
 * Return: 0
 */

int digit(int n)
{
	int cont;

	for (cont = 48; cont <= 57; cont++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
