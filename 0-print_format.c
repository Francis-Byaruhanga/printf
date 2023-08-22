#include "main.h"

/**
 * _printf - Custom implementation of printf function
 * @format: Format string containing conversion specifiers
 * @...: Variable arguments to be formatted and printed
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int len = 0;
	const char *ptr = format;

	va_start(args, format);

	while (*ptr)
	{
		if (*ptr == '%')
		{
			ptr++;
			if (*ptr == 'c')
			{
				char c = va_arg(args, int);

				write(1, &c, 1);
				len++;
			}
			else if (*ptr == 's')
			{
				char *str = va_arg(args, char *);

				while (*str)
				{
					write(1, str, 1);
					str++;
					len++;
				}
			}
			else if (*ptr == '%')
			{
				write(1, "%", 1);
				len++;
			}
		}
		else
		{
			write(1, ptr, 1);
			len++;
		}
		ptr++;
	}

	va_end(args);

	return (len);
}
