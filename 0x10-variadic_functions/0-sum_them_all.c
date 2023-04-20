#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - this will print the sum of all the paramters.
 * @n: The number of paramters passed into the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list apam;
	unsigned int i, sum = 0;

	va_start(apam, n);

	for (i = 0; i < n; i++)
		sum += va_arg(apam, int);

	va_end(apam);

	return (sum);
}

