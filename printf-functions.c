/* printf functions - printf-functions.c */

#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

void (*f)(char *s, dt *args)
{
    /* if s is empty, return an exit */
    if (s == NULL)
        exit(1);
    
}