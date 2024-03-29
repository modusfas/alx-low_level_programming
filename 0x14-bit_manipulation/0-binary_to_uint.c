#include "main.h"
/**
  * binary_to_uint - function that converts a binary number to an unsigned int.
  * @b: binary number
  * Return: the converted number or 0 if
  * there is one or more chars in the string b that is not 0 or 1
  * b is NULL
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint, place;
	int n;

	if (!b)
		return (0);

	for (n = 0; b[n]; n++)
		;
	n--;
	for (place = 1, uint = 0; n >= 0; n--)
	{
		if (b[n] == '0')
		{
			place *= 2;
			continue;
		}
		else if (b[n] == '1')
		{
			uint += place;
			place *= 2;
			continue;
		}
		return (0);
	}
	return (uint);
}
