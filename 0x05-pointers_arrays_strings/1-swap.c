#include "main.h"
#include <stdio.h>
/**
 * 1-swap -  function that swaps the values of two integers
 * a: interger to swap
 * b: interger to swap
 *
 */
void swap(int *a, int *b)
{
	int x;

	x = *a;
		*a = *b;
		*b = x;
}
