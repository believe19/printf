/* printf header - main.h */

#ifndef PRINTF_CALL_H
#define PRINTF_CALL_H

/* create a prototype for printf */
int _printf(const char *s, ...);

/* create a repo for all data types */

enum Type
{
    TYPE_INT,
    TYPE_CHAR,
    TYPE_STRING,
    TYPE_FLOAT,
    TYPE_DOUBLE
};

typedef struct
{
    Type type;
    union
    {
        /* data */
        int i;
        char c;
        char *s;
        float f;
        double d;
        /* pointer */
        void *p;
        /* function */
        void (*f)(void);
        void (*d)(void);
        void (*s)(void);
        void (*p)(void);
        void (*f)(void);
    } value;
} arg_type;

unsigned int format_backslash(&format);
unsigned int format_percent(&format, &arg_type);
unsigned int format_string(&format, int len);

#endif /* PRINTF_CALL_H */