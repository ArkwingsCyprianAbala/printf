#include "main.h"
/**
 * insert - prints string
 * @c: string
 * Return: number of bytes
 */
int insert(char *c)
{
	int size = 0;

	if (c)
	{
		for (size = 0; c[size] != '\0'; size++)
		{
			pucr(c[size]);
		}
	}
	return (size);
}
