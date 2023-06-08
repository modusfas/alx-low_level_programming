#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long int to search
 * @index: index to return
 * Return: the value of the bit at index or -1 if error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (idx > 53)
		return (-1);
	return ((n >> idx) & 1);
}
