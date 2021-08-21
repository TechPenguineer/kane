#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "config/config.h"

int main(int argc, char **argv[])
{
    char OUT_FILE_EXT[] = "kno";
    char LANG_FILE_EXT[] = "kn";

    if(strcmp(argv[1],"run")==0)
    {
        printf("%s",argv[1]);
    }
}