#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Produce salida según un formato especificado
 * @format: Cadena de caracteres con especificadores de formato
 *
 * Return: Número de caracteres impresos (excluyendo el byte nulo)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	if (!format)
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			format++;
			count += handle_format(*format, args);
		}
		else
		{
			count += write(1, format, 1);
		}
		format++;
	}
	va_end(args);
	return (count);
}
