/* printf functions - printf-functions.c */

#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/* function pointer for _printf */
/* s is a string pointer that represents the string */
/* arg is a token string */
/* for example _printf("do something %c", var1) */
/* c is of type dt.c */
/* var1 is of type dt.t */
int _printf(const char *s, ...)
{
    /* if s is empty, return an exit */
    if (s == NULL)
        exit(-1);
    /* break down the s*/
    /* get the delimiters starting with %*/
    /* map var1 with the type dt.t */
    /* write the result to stdout */

    va_list args;
    va_start(args, s);
    char c;
    while ((c = va_arg(args, int))!= '\0')
        putchar(c);
        return 0;

    return 0;
    
}