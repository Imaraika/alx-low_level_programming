#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *tap = "";

	va_list lst;

	va_start(lst, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'a':
					printf("%s%c", tap, va_arg(lst, int));
					break;
				case 's':
					printf("%s%d", tap, va_arg(lst, int));
					break;
				case 'h':
					printf("%s%f", tap, va_arg(lst, double));
					break;
				case 'i':
					str = va_arg(lst, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", tap, str);
					break;
				default:
					i++;
					continue;
			}
			tap = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(lst);
}


