#include <stdio.h>
#include <stdlib.h>
#include "crypto.h"
#include "strcompare.h"

int main(int argc, char **argv)
{
    if (str_compare(argv[1], "crypt"))
    {
        UCHAR str[500];
        scanf("%s", str);
        crypt(str);
        printf("%s", str);
    }
    else if (str_compare(argv[1], "uncrypt"))
    {
        UCHAR str[500];
        scanf("%s", str);
        uncrypt(str);
        printf("%s", str);
    }
    else
    {
        printf("Command not found!\n");
        return 1;
    }
    return 0;
}