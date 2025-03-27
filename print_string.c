#include "main.h"
#include <unistd.h>

/**
 * print_string - Imprime una cadena de caracteres
 * @str: Cadena a imprimir
 *
 * Return: Número de caracteres impresos
 */
int print_string(char *str)
{
	int count = 0;

	if (!str)
		str = "(null)";

	while (*str)
		count += _putchar(*str++);

	return (count);
}
