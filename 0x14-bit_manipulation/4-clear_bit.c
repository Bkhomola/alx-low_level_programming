#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at given index
 * @n: pointer to number
 * @index: place to change bit to 0
 * Return: 1 if it works, -1 if there's an error
 */

int clear_bit(unsigned long int *n, unsigned int index)

{
	int mask = 1 << n;

	return ((n & ~mask) | (b << n));
}

int main(void)
{
	printf("%d\n", modifyBit(6, 2, 0));
	printf("%d\n", modifyBit(6, 5, 1));
	return (0);
}
