#include <stdio.h>
#include "main.h"

/**
 * _print_recursion - prints string in reverse
 * @s: string
 * Return: no return
 */

void _puts_recursion(char *s);

{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
