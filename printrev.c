#include "main.h"

/**
 * print_rev - print reverse function
 * @val: print reverse value
 * Return - void
 *
 */

void print_rev(va_list val)
{
	int i;
	int count = 0;
	char *s = va_arg(val, char *s);

	if (s == NULL)
		s  = "(null)"
	while (s[i] != '\0')
		count++;
	for (i = count - 1 ; s[i] != '\0' ; i--)
		_putchar(s[i]);
	return (i);
}
