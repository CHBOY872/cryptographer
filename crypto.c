#include <stdio.h>
#include <stdlib.h>
#include "crypto.h"

void crypt(UCHAR *text)
{
    UCHAR a = 0, b = 0;
    for (; *text; *text++)
    {
        a = *text >> 5;
        b = *text << 3;
        *text = ~(a | b);
    }
}

void uncrypt(UCHAR *text)
{
    UCHAR a = 0, b = 0;
    for (; *text; *text++)
    {
        *text = ~(*text);
        a = *text << 5;
        b = *text >> 3;
        *text = a | b;
    }
}