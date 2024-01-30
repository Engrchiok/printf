#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _strlen(const char *string);
int intdisp(int);
int charpr(va_list);
int strpr(va_list);
int percpr(char);
int formpr(char);
int intpr(va_list);

#endif
