#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all parameters
 * @n: amount of arguments
 * @...:A variable number of parameters to calculate the sum of
 * Return: if n == 0 - 0
 * Otherwise - the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...);
{
	va_list valist;
	unsigned int i, sum = 0;


	va_start(valist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
