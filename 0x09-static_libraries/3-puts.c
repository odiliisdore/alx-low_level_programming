#include "main.h"

/**
 * _puts - function that prints a string
 * @str: string to be printed
 * Return: void
 */

void _puts(char *str)
{
        while (*str != '\0')
        {
                putchar(*str++);
        }
	putchar('\n');
}
