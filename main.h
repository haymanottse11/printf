#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * struct converter - converts for symbols and functions
 *
 * @type_arg: The operator
 * @f: the function associated
 */
typedef struct converter
{
        char *type_arg;
        int (*f)(va_list, char *, unsigned int);
} converter_t;

int _printf(const char *format, ...);

#endif /* MAIN_H */

