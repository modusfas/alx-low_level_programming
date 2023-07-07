#include "main.h"
/**
  * binary_to_uint - converting a binary number to an unsigned int
  * @b: binary number
  * Return: the converted number or 0 if
	*there is one or more chars in the string b that is not 0 or 1
	*or
	*b is NULL
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint, place;
	int y;

	if (!b)
		return (0);

	for (y = 0; b[y]; y++)
		;
	y--;
	for (place = 1, uint = 0; y >= 0; y--)
	{
		if (b[y] == '0')
		{
			place *= 2;
			continue;
		}
		else if (b[y] == '1')
		{
			uint += place;
			place *= 2;
			continue;
		}
		return (0);
	}
	return (uint);
}
