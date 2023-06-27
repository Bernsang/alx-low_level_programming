#include "main.h"
/**
 *reset_to_98- function that takes a pointer to an int as parameter
 *and updates the value it points to
 *
 * Return: n
 */
int main(void)
{
	int n;

		n = 402;
		printf("%d\n", n);
		reset_to_98(&n);
		printf("%d\n", n);
		return (n);
}
