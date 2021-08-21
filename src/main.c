#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "include/io.h"
#include "include/configs.h"
#include "include/parser.h"

void NoArgPrompt()
{
    printf("Kane - Version 0.0.0.1");
}

void WriteLineInde()
{
    printf("\n");
    printf("\033[1m\033[31m  =\033[1m\033[33m>\033[1m\033[37m");

    char *line = NULL;

    if(getline(&line, NULL, stdin) == -1)
    {
        printf("\033[1m\033[31m Sandbox Error: Unable to accept line arguments\n");
    }
    else
    {
        printf("%s\n",line);
    }
}
void OpenSandboxPrompt()
{
    
    printf("\033[32m /$$   /$$                              \n");
    printf("| $$  /$$/                              \n");
    printf("| $$ /$$/   /$$$$$$  /$$$$$$$   /$$$$$$ \n");
    printf("| $$$$$/   |____  $$| $$__  $$ /$$__  $$\n");
    printf("| $$  $$    /$$$$$$$| $$  \\ $$| $$$$$$$$\n");
    printf("| $$\\  $$  /$$__  $$| $$  | $$| $$_____/\n");
    printf("| $$ \\  $$|  $$$$$$$| $$  | $$|  $$$$$$$\n");
    printf("|__/  \\__/ \\_______/|__/  |__/ \\_______/\n");
    printf("\n\n");
    WriteLineInde();
}
int main(int argc, char* argv[])
{
    int RUN_ARG_LEN = 3;

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
            printf("Run Error: Too many arguments supplied\n");
        }
        if (argc < RUN_ARG_LEN)
        {
            printf("Run Error: Not enough arguments supplied\n");
        }
        if (argc == RUN_ARG_LEN)
        {
           char* content = readFile(argv[2]);
           
           int len = strlen(argv[2]);
   
           
           if(content)
           {
               parser(content);
           }


            else if(content == NULL)
                printf("\033[1m\033[31m Interpreter Error: \"%s\" not found\033[0m\n", argv[2]);
           }
        
    }

    if(strcmp(argv[1], "sandbox")==0)
    {
        OpenSandboxPrompt();
        
    }
}