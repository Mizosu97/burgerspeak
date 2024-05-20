#include <stdio.h>
#include <string.h>
#include "includes/file.h"
#include "includes/cleaner.h"

int main(int arc, char** argv)
{
	char* Source;

	if (argv[1] != 0) {
		Source = cleanJunk(getFileContents(argv[1]));}
	else {
		printf("No source file supplied.");
		return 0;
	}

	printf("%s", Source);

	return 0;
}
