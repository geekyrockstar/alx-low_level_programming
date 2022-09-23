#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: arrary of ints
 * @n: size of array
 * Description: reverse an array with n elements
 **/

void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;

	for (i = 0; i < n; i++)
	{
		temp = a[n - 1];
		a[n - 1] = a[i];
		a[i] = temp;
		n--;
	}
}
