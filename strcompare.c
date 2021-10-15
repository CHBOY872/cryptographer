#include <stdio.h>
#include <stdlib.h>
#include "strcompare.h"

int str_compare(const char *str1, const char *str2)
{
    for (; *str1, *str2; *str1++, *str2++)
    {
        if (*str1 == *str2)
        {
            continue;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}