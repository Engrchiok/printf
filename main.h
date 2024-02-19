#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int printc(va_list *, char, int *);
int prints(va_list *, char, int *);
int printperc(va_list *, char, int *);
int _strlen(char *);
int printdni(va_list *, char, int *);
int prinum(int, int *);
int printb(va_list *, char, int *);
int pribin(int, int *);
int printu(va_list *, char, int *);
int printo(va_list *, char, int *);
int printxnX(va_list *, char, int *);
int prinunint(unsigned int, int *);
int prinoct(unsigned int, int *);
int prix(unsigned int, int *);
int priX(unsigned int, int *);

#endif
