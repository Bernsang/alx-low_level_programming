#include "main.h"
#include <stdio.h>
/**
 * swap_int -  function that swaps the values of two integers
 * @a: interger to swap
 * @b: interger to swap
 *
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
		*a = *b;
		*b = x;
}
