#include <stdio.h>
#include "main.h"

/**
 * write a function that prints astring
 * followed by a line
 */

void _puts_recursion(char *s)
{
	if (*s == '\0') //Base case
		return (0);
	printf("%c", *s);
	print(++s);
}
