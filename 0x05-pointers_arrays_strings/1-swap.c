#include "main.h"
/**
 * swap_int - writes the character c to stdout
 * @a: The character to print
 * @b: the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void swap_int(int *a, int *b)
{
int x, y;
x = *b;
y = *a;
*a = x;
*b = y;
}
