#include <stdio.h>
#include <stdlib.h>
#include "crypto.h"
#include "strcompare.h"

int main(int argc, char **argv)
{
    if (argc > 3)                                       // check the program on count of inputed arguments
    {
        printf("Too many arguments!\n");
        return 1;
    }
    
    if (str_compare(argv[1], "crypt"))                  // if argument == crypt:
    {
        UCHAR str[500];
        scanf("%s", str);
        crypt(str);
        printf("%s", str);
    }
    else if (str_compare(argv[1], "uncrypt"))           // if argument == uncrypt:
    {
        UCHAR str[500];
        scanf("%s", str);
        uncrypt(str);
        printf("%s", str);
    }
    else                                                // if argument is not one of the essential
    {                                                   // arguments for using programm
        printf("Command not found!\n");
        return 2;
    }
    return 0;
}