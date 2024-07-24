#include "main.h"

/**
 * _printf - prints a formatted string
 * @format: the format string
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	const char *p;

	if (!format)
        return (-1);

	va_start(args, format);

	for (p = format; *p != '\0'; p++)
	{
		if (*p == '%')
        {
		p++;
		switch (*p)
		{
			case 'c':
				count += _putchar(va_arg(args, int));
				break;
			case 's':
				{
					char *str = va_arg(args, char *);
					while (*str)
					{
						count += _putchar(*str++);
					}
					break;
				}
			case '%':
				count += _putchar('%');
						break;
			default:
						count += _putchar('%');
						count += _putchar(*p);
						break;
		}
	}
		else
		{
			count += _putchar(*p);
		}
	}

	va_end(args);
	return (count);
}
