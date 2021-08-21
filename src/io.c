#include "include/io.h"

char *readFile(char* filename)
{
    char * buffer;
    long length;
    FILE * f = fopen(filename, "rb");
    if (f)
    {
        fseek(f,0,SEEK_END);
        length = ftell(f);
        fseek(f,0,SEEK_SET);
        buffer = malloc(length);

        if(buffer)
        {
            fscanf(f, " ");
            fread(buffer,1,length,f);

        }
        fclose(f);
    }
    return buffer;
}