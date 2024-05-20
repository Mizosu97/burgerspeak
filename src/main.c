#include <stdio.h>
#include <string.h>
#include "file.c"
#include "parser.c"
#include "lexer.c"

int main(int arc, char** argv)
{
	printf("%s", getFileContents(argv[1]));
}
