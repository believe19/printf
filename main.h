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
void (*f)(char *c, dt *args);

#endif /* PRINTF_CALL_H */