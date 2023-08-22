#include "main.h"
/**
 * pucr is used to print a character
 * @c: character input
 * Return 1
 */
int pucr(char c)
{
	return (write(1, &c, 1));
}
