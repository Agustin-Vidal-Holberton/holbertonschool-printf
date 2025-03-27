#include "main.h"
#include <unistd.h>

/**
 * print_char - Imprime un solo caracter
 * @c: Caracter a imprimir
 *
 * Return: Número de caracteres impresos (siempre 1)
 */
int print_char(char c)
{
    return (write(1, &c, 1));
}
