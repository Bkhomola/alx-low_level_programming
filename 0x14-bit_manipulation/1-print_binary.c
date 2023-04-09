#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to convert
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int i;

	for (i = 1 << 31; i > 0; i = i / 2)
	(n & i) ? printf("1") : printf("0");
}
{
	bin(7);
	printf("\n");
	bin(4);
}
