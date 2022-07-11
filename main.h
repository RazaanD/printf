#ifndef _RAZ_H_
#define _RAZ_H_

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct formats - structre to handle the different formats
 * @f: the format
 * @func: the function pointer
 */
typedef struct formats
{
	char *f;
	int (*func)(va_list);
} forma_t;

int _printf(const char *format, ...);
int _putchar(char c);
int format_h(const char *format, forma_t *stc_ar, va_list arg);

/* Single prototypes as calc task */
int op_c(va_list c);
int op_s(va_list s);
int rangeof(int n);
int rangeofInt(int n);
int op_d(va_list d);
int op_i(va_list n);
int powten(int n);
#endif

/**
 * struct flag_s - A new type defining a flags struct.
 * @flag: A character representing a flag.
 * @value: The integer value of the flag.
 */
typedef struct flag_s
{
	unsigned char flag;
	unsigned char value;
} flag_t;

int _printf(const char *format, ...);

/* Conversion Specifier Functions */
unsigned int convert_c(va_list args, buffer_t *output,
		unsigned char flags, int wid, int prec, unsigned char len);
unsigned int convert_s(va_list args, buffer_t *output,
		unsigned char flags, int wid, int prec, unsigned char len);
unsigned int convert_di(va_list args, buffer_t *output,
		unsigned char flags, int wid, int prec, unsigned char len);
unsigned int convert_percent(va_list args, buffer_t *output,
		unsigned char flags, int wid, int prec, unsigned char len);
unsigned int convert_b(va_list args, buffer_t *output,
		unsigned char flags, int wid, int prec, unsigned char len);
unsigned int convert_u(va_list args, buffer_t *output,
		unsigned char flags, int wid, int prec, unsigned char len);
unsigned int convert_o(va_list args, buffer_t *output,
		unsigned char flags, int wid, int prec, unsigned char len);
unsigned int convert_x(va_list args, buffer_t *output,
		unsigned char flags, int wid, int prec, unsigned char len);
unsigned int convert_X(va_list args, buffer_t *output,
		unsigned char flags, int wid, int prec, unsigned char len);
unsigned int convert_S(va_list args, buffer_t *output,
		unsigned char flags, int wid, int prec, unsigned char len);
unsigned int convert_p(va_list args, buffer_t *output,
		unsigned char flags, int wid, int prec, unsigned char len);
unsigned int convert_r(va_list args, buffer_t *output,
		unsigned char flags, int wid, int prec, unsigned char len);
unsigned int convert_R(va_list args, buffer_t *output,
		unsigned char flags, int wid, int prec, unsigned char len);
