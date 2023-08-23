#include <stdio.h>
#include "main.h"

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
    return (0);
}

