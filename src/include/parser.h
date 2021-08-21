#ifndef PARSER_H
#define PARSER_H

void ParserSkipWhitespace(char* FILE_DATA);
void parser(char* FILE_DATA); // RETURNS PARSER FUNCTIONS. Does NOT handle parser data just returns it
void returnInstructions(char* PARSED_DATA);

#endif