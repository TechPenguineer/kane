// Heading Directories

#include "include/parser.h"

// Standard Libraries 

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void ParserSkipWhitespace(char* FILE_DATA)
{
    if (FILE_DATA )
    {
        /* code */
    }
    
}

void parser(char* FILE_DATA)
{
    int CURRENT_CHAR;

    int FILE_LENGTH = strlen(FILE_DATA);
    
    int i;
    for(i=0; i<FILE_LENGTH; i++)
    {
        printf("%c ", FILE_DATA[i]);
                
    }
}