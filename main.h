/* printf header - main.h */

#ifndef PRINTF_CALL_H
#define PRINTF_CALL_H

/* create a struct to host the repository */
typedef struct datatype 
{
	char c;
	char *t;
} dt;

/* create a prototype for printf */
void (*f)(char *s, dt *args);

/* create a repo for all dt types */
dt dt_array[] = 
    {
        {'c', 'char'},
		{'d', 'int'},
		{'f', 'float'},
        {'g', 'double'},
        {'i', 'int'},
        {'l', 'long'},
        {'s', 'char'},
		{'t', 'char'},
        {'u', 'int'},
        {'x', 'int'},
        {'X', 'int'},
    };


#endif /* PRINTF_CALL_H */