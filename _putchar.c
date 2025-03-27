#include "main.h"
#include <unistd.h>

/**
 * _putchar - Escribe un carácter en la salida estándar
 * @c: Carácter a imprimir
 *
 * Return: 1 si tiene éxito, -1 en caso de error
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}
