#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...);
void count_characters(int *count, int num_chars);
void handle_format(va_list args, char format, int *count);

#endif
