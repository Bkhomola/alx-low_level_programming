#include "holberton.h"

/**
 * get_bit - returns the value of a bit at the given index
 * @n: the number to check
 * @index: the index to check the bit
 * Return: value of the bit at @index, -1 if there's an error
 */

int get_bit(unsigned long int n, unsigned int index)

{
	int mask = 1 << p;

	return ((n & ~mask) | (b << p));
}

int main(void)
{
	printf("%d\n", modifyBit(6, 2, 0));
	printf("%d\n", modifyBit(6, 5, 1));
	return (0);
}
