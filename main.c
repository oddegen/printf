#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    printf("Length:[%d, %i] : [%d, %i]\n", len, len, len2, len2);
    len = _printf("Character:[%c]\n", 'H');
    len2 =  printf("Character:[%c]\n", 'H');
    printf("Lenght: [%d, %i] : [%d, %i]\n", len, len, len2, len2);
    len = _printf("String:[%s]\n", "I am a string !");
    len2 = printf("String:[%s]\n", "I am a string !");
    printf("Length: [%d, %i] : [%d, %i]\n", len, len, len2, len2);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    printf("Len:[%d] : [%d]\n", len, len2);
    _printf("Unknown:[%s]\n", "");
    printf("Unknown:[%s]\n", "");
    return (0);
}
