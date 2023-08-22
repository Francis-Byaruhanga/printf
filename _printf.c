#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string containing directives
 * @...: Variable number of arguments based on format
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	int printed_chars = 0;
	va_list args;

	va_start(args, format);

	while (format && *format)
	{
		if (*format == '%' && *(format + 1))
		{
			format++;
			if (*format == 'c')
				printed_chars += print_char(va_arg(args, int));
			else if (*format == 's')
				printed_chars += print_string(va_arg(args, char *));
			else
				printed_chars += write(1, "%", 1);
		}
		else
			printed_chars += write(1, format, 1);
		format++;
	}

	va_end(args);
	return (printed_chars);
}

/**
 * print_char - Prints a character
 * @c: Character to be printed
 *
 * Return: Number of characters printed.
 */
int print_char(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_string - Print a string
 * @s: String to be printed
 *
 * Return: Number of characters printed
 */
int print_string(char *s)
{
	int len = 0;

	if (!s)
		s = "(null)";

	while (*s)
	{
		len++;
		s++;
	}

	return (write(1, s - len, len));
}
