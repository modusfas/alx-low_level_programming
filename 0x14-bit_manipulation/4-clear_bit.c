#include "main.h"
/**
  * clear_bit - sets the value of a bit to 0 at a given index
  * @n: unsigned long to change
  * @index: index to change to zero
  * Return: 1 if it worked or -1 if an error occurred
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int zero;

	if (index > 53 || !n)
		return (-1);
	zero = 1 << index;
	*n = (*n & ~zero) | ((0 << index) & zero);
	return (1);
}
