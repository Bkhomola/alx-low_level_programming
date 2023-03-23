#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * chk_char - prints the char character
 * @list: the type
 * Return: nothing
 */
void chk_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * chk_int - prints the int
 * @list: the type
 * Return: nothing
 */
void chk_int(va_list list)
{
	printf("%i", va_arg(list, int));
}
/**
 * chk_float - prints the float
 * @list: the type
 * Return: nothing
 */
void chk_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * chk_string - prints the string
 * @list: the type
 * Return: nothing
 */
void chk_string(va_list list)
{
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}
