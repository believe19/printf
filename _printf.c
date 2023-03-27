/* printf functions - printf-functions.c */

#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/* function pointer for _printf */

int _printf(const char *format, ...)
{
    unsigned int len, i = 0;
    unsigned int *ip;
    ip = &len;

    /* if format is empty, return an error code -1 */
    if (format == NULL)
        return (-1);
    
    va_list args;
    va_start(args, format);
            
    /* task 1 */
    /* returns the number of characters printed */
    /* iterate pointer s till the end */
    while (format != '\0')
    {
            
            /* resolve new s to be printed */
            if (format[i] == '\\')
                *ip += format_backslash(format[i]);
            if (format[i]  == '%')
                *ip += format_percent(format[i], va_arg(args, arg_type));
            
            /* iterate over the total size */
            i++;
    }

    va_end(args);   
    format_string(format, len);
    return (len);
}