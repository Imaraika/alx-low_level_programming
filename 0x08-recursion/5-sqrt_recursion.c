#include "main.h"

/**
 * _sqrtn - This function helps to_sqrt_recursion calculate the sq-root
 * @nbr: The number to find it's root
 * @guess: The current guess for
 * Return: The calculated square root
 */
int _sqrtn(int nbr, int guess)
{
	/* Checks if the square > nbr */
	if (guess * guess > nbr)
		return (-1);
	if (guess * guess == nbr)
		return (guess);
	return (_sqrtn(nbr, guess + 1));
}

/**
 * _sqrt_recursion - This function prints a square root of the number
 * @n: The number to find its root
 * Return: The square root in int type
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrtn(n, 0));
}
