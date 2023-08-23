#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...);
void count_characters(int *count, int num_chars);
void handle_format(va_list args, char format, int *count);
void print_integer(unsigned int num, int *count);
void print_digit(int digit, int *count);
void print_string(const char *str, int *count);
void print_binary(unsigned int num, int *count);

#endif
