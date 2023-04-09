#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: the first number
 * @m: the second number
 * @FlippedCount: count set bits
 * @main: calculate n and m
 * Return: the number of flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	int count = 0

	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
	return (count);
}

int FlippedCount(int n, int m)

{
	return (countSetBits n ^ m);
}

int 'main'(void)

{
	int n = 10
	int m = 20

	printf("%d\n", FlippedCount(n, m));
	return (0);
}
