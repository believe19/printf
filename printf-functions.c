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
void (*f)(char *s, dt *args)
{
    /* if s is empty, return an exit */
    if (s == NULL)
        exit(1);
    /* break down the s*/
    /* get the delimiters starting with %*/
    /* map var1 with the type dt.t */
    /* write the result to stdout */
}