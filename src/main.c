#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "include/configs.h"

void NoArgPrompt()
{
    printf("Kane - Version 0.0.0.1");
}
int main(int argc, char* argv[])
{
    int RUN_ARG_LEN = 2;

    char OUT_FILE_EXT[] = "kno";
    char LANG_FILE_EXT[] = "kn";

    if(argc==0)
    {
        NoArgPrompt();
    }
    if(argc==1 && strcmp(argv[1],"--version")==0)
    {
        NoArgPrompt();
    }

    if(strcmp(argv[1],"run")==0)
    {
        if (argc > RUN_ARG_LEN)
        {
            printf("Run Error: Too many arguments supplied");
        }
        if (argc < RUN_ARG_LEN)
        {
            printf("Run Error: Not enough arguments supplied");
        }
        
        
    }
}