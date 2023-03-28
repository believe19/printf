// how to format the string in printf using format_backslash in c

#include <stdio.h>
#include <string.h>
#include "main.h"

unsigned int format_backslash(&format)
{
    unsigned int i;
    
    for (i = 0; i < format.length; i++) {
        if (format.data[i] == '\\') {
            char str = format.data[i];
            write(1, str, 1)
        };
    }
    
    return i;
}

unsigned int format_percent(format, arg_type)
{
    
}