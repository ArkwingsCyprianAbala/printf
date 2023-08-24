#include "main.h"
/**
 * @pucr: print a character
 * @c: character input
 * Return: 1 on success
 */
int pucr(char c)
{
	return (write(1, &c, 1));
}
