#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * op_c - Prints a char.
 * @c: Char to print.
 *
 * Return: always 1
 */
int op_c(va_list c)
{
	char ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}
