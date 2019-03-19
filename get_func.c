#include "holberton.h"

/**
 *
 *
 */

int (get_func(char *s))(char*)
{
	int x = 0;

	opt_t array[] = {
		{"c", only_char},
		{"s", string},
		{NULL, NULL}
	};

	while (x < 3)
	{
		if (*(array[x].char_t) == *s) 
		{
			return (array[x].f);
		}
		x++;
	}
	return (0);
}
