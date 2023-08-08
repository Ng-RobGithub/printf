#include "main.h"
#include <stdarg.h>

/**
 * _printf - Print formatted text
 * @format: The format string
 * @...: Additional arguments
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	unsigned int i = 0;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			count++;
			i++;
		}
		i++;
	}

	va_end(args);

	return (count);
}

