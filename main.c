#include <stdio.h>

#include "askname.h"

int main(int argc, char **argv)
{
    char first[255], last[255];

    askname(first, last);

    printf("Hey you, %s %s!\n", first, last);
    printf("How you doing?");
    printf(first,last);
    return 0;
}
