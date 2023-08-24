#include "main.h"
/**
 * _putchar - write character c to stdout
 * @pucr: print a character
 * @c: character input
 * Return: 1 on success or else -1
 */
int pucr(char c)
{
	return (write(1, &c, 1));
}
