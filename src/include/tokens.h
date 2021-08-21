#ifndef TOKEN_H
#define TOKEN_H

typedef struct TOKEN_STRUCTURE
{
    enum
    {
        TOKEN_EQUALS,
        TOKEN_AND,
        TOKEN_EOL
    } type;

    char * value;
} token_T;

#endif
