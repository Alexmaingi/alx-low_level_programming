#include <stdio.h>

/**
 * The main function initializes an integer variable 'n'
 * an integer array 'a' of size 5, as well as a pointer variable 'p'
 * The element at index 2 of the 'a' array is set to 1024
 * The pointer 'p' is assigned the memory address of variable 'n'
 * Return: always 0;
 *
 */

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;


	(p + 5) = 98;
	/* ... so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
