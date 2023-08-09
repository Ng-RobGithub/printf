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
/**
 * print_buffer - Prints the contents of the buffer if it exist
 * @buffer: Array of chars
 * @size: represents the size.
 */
void print_buffer(const char *buffer, size_t size)
{
	size_t i;

	if (buffer != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			printf("%c", buffer[i]);
		}
		printf("\n");
	} else
	{
		printf("Buffer is empty or invalid.\n");
	}
}
