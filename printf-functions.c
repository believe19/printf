/* printf functions - printf-functions.c */

#include "main.h"
#include <stdio.h>
#include <stddef.h>

void (*f)(char c, dt *args)
{
	dt dt_array[] = 
    {
        {DT_CHAR, "char"},
        {DT_INT, "int"},
        {DT_FLOAT, "float"},
        {DT_DOUBLE, "double"},
        {DT_STRING, "string"},
        {DT_ARRAY, "array"},
        {DT_STRUCT, "struct"},
        {DT_UNION, "union"},
        {DT_ENUM, "enum"},
        {DT_VOID, "void"},
        {DT_BOOL, "bool"},
        {DT_INT8, "int8"},
        {DT_INT16, "int16"},
        {DT_INT32, "int32"},
        {DT_INT64, "int64"},
        {DT_UINT8, "uint8"},
        {DT_UINT16, "uint16"},
        {DT_UINT32, "uint32"},
    }

}