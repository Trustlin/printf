#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/*flag*/
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/*sizes*/
#define s_LONG 2
#define s_SHORT 1

/**
 * struct fmt - struct op
 * @fmt: format
 * @fn: function associated
 */

struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};

/**
 * typedef struct fmt fm_t - struct op
 * @fmt: format
 * @fm_t: function associated
 */

typedef struct fmt fmt_t;

int _printf(const char *format, ...);
int handle _print(const char *fmt, int *i
va_list list, char buffer[], int flags, int width, int precision, int size);

/*function*/

/*function to print chars and strings*/
int print_char(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[],
		int flags, int width, int precision, int size);

/*function to print numbers*/
int print_int(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_binary(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_unsigned(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_octal(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_hexadecimal(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_hexa_upper(va_list types, char buffer[],
		int flags, int width, int precision, int size);

int print_hexa(va_list types, char map_to[],
		char buffer[], int flags, int width, int precision, int size);

#endif
