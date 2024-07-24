#include "main.h"
/**
 * main - Entry point for testing the _printf function
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    len = _printf("Hello %s\n", "world");
    _printf("Length: %d\n", len);
    return (0);
}
