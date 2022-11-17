#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/*
 * File: variadic_functions.h
 * Auth: Johnson Ajayi
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x0F-variadic_functions directory.
 */

#include <stdarg.h>

/**
 * struct print - A new struct type defining the print.
 * @symbol: A symbol representing a data type.
 * @print-func: A function pointer to a function that prints
 *         a data type corresponding to symbol.
 */
typedef struct print
{
	char *symbol;
	void (*print_func)(va_list arg);

} func_printer;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

#endif
