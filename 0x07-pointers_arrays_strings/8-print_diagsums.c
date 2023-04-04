#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int diag_sum1, diago_sum2, i;

	diag_sum1 = 0;
	diago_sum2 = 0;

	for (i = 0; i < size; i++)
	{
		diag_sum1 = diag_sum1 + a[i * size + i];
	}

	for (i = size - 1; i >= 0; i--)
	{
		diago_sum2 += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", diag_sum1, diago_sum2);
}
