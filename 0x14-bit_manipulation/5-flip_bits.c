#include "main.h"

/**
 * flip_bits - returns hamming Distance of two bit words
 * @n: the first bit word
 * @m: the second bit word
 *
 * Return: the hamming Distance
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int Shift = (sizeof(n) * 8);
	int Distance = 0;

	while (Shift--)
		Distance += (n >> Shift & 1) != (m >> Shift & 1);
	return (Distance);
}
