#include <stdio.h>
#include <limits.h>
#include "../main.h"

int main(void)
{
int len, len2;
    int custom_len = _printf("Custom: Length test: %d %s %c\n", 42, "test", 'X');
    int printf_len = printf("Custom: Length test: %d %s %c\n", 42, "test", 'X');
    
    _printf("Custom: %s\n", "Hello, world!");
    printf("Original: %s\n", "Hello, world!");

    _printf("Custom: %s\n", "");
    printf("Original: %s\n", "");

    _printf("Custom: %s\n", NULL);
    printf("Original: %s\n", NULL);

    _printf("Custom: %c\n", 'A');
    printf("Original: %c\n", 'A');

    _printf("Custom: %c %c %c\n", '\t', '\n', '\\');
    printf("Original: %c %c %c\n", '\t', '\n', '\\');

    _printf("Custom: %%\n");
    printf("Original: %%\n");


    _printf("%%%%s\n", "1");  
    printf("%%%%s\n", "1");  
  
    _printf("Custom: Length: %d\n", custom_len);
    printf("Original: Length: %d\n", printf_len);

   len =  _printf("%");
   len2 =  printf("%");
    printf("\n[%d]:[%d]\n", len, len2);

    _printf("Positive integer: %d\n", 42);
    printf("Positive integer: %d\n", 42);

    _printf("Negative integer: %d\n", -42);
    printf("Negative integer: %d\n", -42);

    _printf("Zero: %d\n", 0);
    printf("Zero: %d\n", 0);

    _printf("INT_MIN: %d\n", INT_MIN);
    printf("INT_MIN: %d\n", INT_MIN);

    _printf("INT_MAX: %d\n", INT_MAX);
    printf("INT_MAX: %d\n", INT_MAX);

    _printf("Leading zeros: %d\n", 007);
    printf("Leading zeros: %d\n", 007);

    _printf("Large positive value: %d\n", 2147483647);
    printf("Large positive value: %d\n", 2147483647);

    _printf("Large negative value: %d\n", -2147483648);
    printf("Large negative value: %d\n", -2147483648);
    return (0);
}

