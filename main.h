#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int printc(va_list, char, char, int *);
int prints(va_list, char, char, int *);
int printperc(va_list, char, char, int *);
int _strlen(char *);
int printd(va_list, char, char, int *);
int prinum(int);

#endif
