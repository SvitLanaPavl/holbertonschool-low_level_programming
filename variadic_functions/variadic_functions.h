#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
typedef struct print_format
{
 char *type;
 void (*f)(va_list ap);
} print_f; 
void print_all(const char * const format, ...);
#endif
