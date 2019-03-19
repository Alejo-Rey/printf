#ifndef HOLBERTON
#define HOLBERTON

/**
 * struct pf - Struct pf
 *
 * @char_t: The operator
 * @f: The function associated
 */
typedef struct pf
{
	char *char_t;
	int (*f)(char*);
} pf_t;

char string(char *n);
char one(char *n);

#endif
